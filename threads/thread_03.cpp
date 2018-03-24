#include <iostream>
#include <thread>

void thread_fn(int i, std::string str, double d)
{
    std::cout << i << " " << str << " " << d << std::endl;
}

int main()
{
    std::thread t(thread_fn, 20, "Karthick", 32.0);
    t.join();
}
