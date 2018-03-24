#include <iostream>
#include <thread>
#include <mutex>

int counter = 0;
std::mutex mtx;

void thread_fn()
{
    for(;;) {
        std::lock_guard<std::mutex> lck(mtx);
        counter++;
        std::cout << counter << std::endl;
    }
}

int main()
{
    std::thread t1(thread_fn);
    std::thread t2(thread_fn);
    t1.join();
    t2.join();
}
