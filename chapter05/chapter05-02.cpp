#include <iostream>
#include <thread>

int gvar = 0;

void f()
{
    while(1)
    {
        std::cout << "F " << gvar << std::endl;
        ++gvar;
    }
}

void g()
{   
    while(1)
    {
        std::cout << "G " << gvar << std::endl;
        ++gvar;
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
