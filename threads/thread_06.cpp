#include <iostream>
#include <thread>

int counter = 0;

void thread_fn()
{
    for(;;) {
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
