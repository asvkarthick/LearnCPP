#include <iostream>
#include <thread>
#include <mutex>

int counter = 0;
std::mutex mtx;

void thread_fn()
{
    for(;;) {
        mtx.lock();
        counter++;
        std::cout << counter << std::endl;
        mtx.unlock();
    }
}

int main()
{
    std::thread t1(thread_fn);
    std::thread t2(thread_fn);
    t1.join();
    t2.join();
}
