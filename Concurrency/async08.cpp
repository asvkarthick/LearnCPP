#include <future>
#include <iostream>
#include <thread>

int thread_func()
{
    return 10;
}

int main()
{
    // std::shared_future<int> f(std::async(thread_func));
    std::future<int> f(std::async(thread_func));

    while(true)
    {
        std::cout << f.get() << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    return 0;
}
