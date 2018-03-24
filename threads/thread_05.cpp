#include <iostream>
#include <thread>

int var = 1;

void thread_fn()
{
    var++;
    while(true)
    {
        std::cout << var << std::endl;
    }
}

int main()
{
    std::thread t1(thread_fn);
    std::thread t2(thread_fn);
    t1.join();
    t2.join();
}
