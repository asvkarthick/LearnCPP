/* Program to mimic camera process capture request and result functionalities
 * using Producer-Consumer problem
 */

#include <iostream>
#include <condition_variable>
#include <mutex>
#include <thread>
#include <list>
#include <chrono>

std::list<int> freeList;
std::list<int> processPendingList;
std::list<int> frameNumberList;
std::mutex gMutex1, gMutex2;
std::condition_variable gCV1, gCV2;
int frameNumber = 0;

void frameCallback(int);

void processResult()
{
	while (true) {
		std::unique_lock<std::mutex> ul(gMutex2);
		gCV2.wait(ul, []() { return processPendingList.size(); });
		auto it = processPendingList.begin();
		if (it != processPendingList.end()) {
			auto frameNumber = *it;
			processPendingList.erase(it);
			std::cout << "Process Result thread FN " << frameNumber << std::endl;
			ul.unlock();
			std::this_thread::sleep_for(std::chrono::milliseconds(16));
			frameCallback(frameNumber);
		}
	}
}

void processRequest(int data)
{
	std::unique_lock<std::mutex> ul(gMutex2);
	std::cout << "Process Request thread FN " << data << std::endl;
	processPendingList.push_back(data);
	ul.unlock();
	gCV2.notify_one();
}

void frameCallback(int data)
{
	std::unique_lock<std::mutex> ul(gMutex1);
	std::cout << "Frame " << data << std::endl;
	freeList.push_back(data);
	ul.unlock();
	gCV1.notify_one();
}

void run()
{
	{
		std::unique_lock<std::mutex> ul(gMutex1);
		std::cout << "Start capture" << std::endl;
		for (auto it = freeList.begin(); it != freeList.end(); it++) {
			processRequest(frameNumber);
			freeList.erase(it);
			it = freeList.begin();
			++frameNumber;
		}
	}

	while (true) {
		std::unique_lock<std::mutex> ul(gMutex1);
		gCV1.wait(ul, []() { return freeList.size(); });
		auto it = freeList.begin();
		if (it != freeList.end()) {
			freeList.erase(it);
			ul.unlock();
			processRequest(frameNumber);
			++frameNumber;
		}
	}
}

void init(int numBuffers)
{
	std::cout << "Initializing numBuffers = " << numBuffers << std::endl;
	for (int i = 0; i < numBuffers; i++)
	{
		freeList.push_back(i);
	}
}

int main(void)
{
	std::cout << "Producer-Consumer" << std::endl;
	std::thread t{processResult};

	init(4);
	run();

	t.join();
	return 0;
}
