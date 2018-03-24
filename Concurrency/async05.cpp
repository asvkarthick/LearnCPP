#include <future>
#include <chrono>
#include <iostream>

void thread_func(unsigned char c)
{
    while(true) {
        std::cout.put(c).flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
}

int main(void)
{
    auto f1 = std::async(std::launch::async, [] { thread_func('A'); } );
    auto f2 = std::async(std::launch::async, [] { thread_func('*'); } );

    f1.get();
    f2.get();

    return 0;
}
