#include <future>
#include <thread>
#include <chrono>
#include <iostream>

int delay( char c )
{
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    return c;
}

int func1()
{
    return delay('.');
}

int func2()
{
    return 20;
}

int main()
{
    std::cout << "Starting main" << std::endl;
    std::future<int> result1(std::async(func1));
    int result2 = func2();
    std::cout << "Waiting for result1" << std::endl;
    int result = result1.get() + result2;
    std::cout << "Result = " << result << std::endl;
}
