#include <iostream>
#include <thread>
#include <mutex>

int gvar = 0;
std::mutex m;

void f()
{
    while(1)
    {
        std::unique_lock<std::mutex> lck{m};
        std::cout << "F " << gvar << std::endl;
        ++gvar;
        lck.unlock();
    }
}

void g()
{
    while(1)
    {
        std::unique_lock<std::mutex> lck{m};
        std::cout << "G " << gvar << std::endl;
        ++gvar;
        lck.unlock();
    }
}

int main(void)
{
    std::thread t1{f};
    std::thread t2{g};

    t1.join();
    t2.join();

    return 0;
}
