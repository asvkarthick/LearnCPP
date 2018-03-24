#include <iostream>
#include <thread>

void f()
{
    std::cout << "Executing thread\n";
}

int main(void)
{
    std::thread t1{f};
    std::thread t2{f};

    t1.join();
    t2.join();

    return 0;
}
