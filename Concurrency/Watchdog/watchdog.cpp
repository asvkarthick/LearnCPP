// g++ watchdog.cpp -std=c++11 -lpthread -o watchdog
#include <iostream>
#include <thread>
#include <condition_variable>
#include <chrono>
#include <mutex>

class Watchdog
{
public:
	Watchdog(int num): mIsCameraStreaming { false }, mNumber { num }
	{
		std::cout << "Watchdog constructor" << std::endl;
	}
	~Watchdog()
	{
		mWatchdogThread.join();
		std::cout << "Watchdog destructor" << std::endl;
	}
	void watchdogThread()
	{
		std::cout << "Watchdog thread : " << mNumber << std::endl;
		while (true) {
			std::unique_lock<std::mutex> ul(mMutex);
			mCV.wait_for(ul, std::chrono::seconds(5), [this]() { return !mIsCameraStreaming; } );
			if (mIsCameraStreaming) {
				std::cout << "Watchdog thread exiting after timeout" << std::endl;
			} else {
				std::cout << "Watchdog thread exit - CV set" << std::endl;
			}
			break;
		}
		std::cout << "Exiting watchdog thread" << std::endl;
	}
	void start(int s)
	{
		mIsCameraStreaming = true;
		mWatchdogThread = std::thread(&Watchdog::watchdogThread, this);
		std::this_thread::sleep_for(std::chrono::seconds(s));
	}
	void stop()
	{
		mMutex.lock();
		mIsCameraStreaming = false;
		mMutex.unlock();
		mCV.notify_one();
		if(mWatchdogThread.joinable())
			mWatchdogThread.join();
	}
private:
	std::mutex mMutex;
	std::condition_variable mCV;
	std::thread mWatchdogThread;
	bool mIsCameraStreaming;
	int  mNumber;
};

int main(void)
{
	Watchdog w1(1), w2(2);
	std::cout << "Starting w1" << std::endl;
	w1.start(10);
	w1.stop();
	std::cout << "Starting w2" << std::endl;
	w2.start(1);
	w2.stop();

	return 0;
}
