#include <iostream>
#include <thread>

class thread_class
{
public:
    thread_class(int arg) : i{arg}
    {
        std::cout << "Thread constructor" << std::endl;
    }
    void set(int arg)
    {
        i = arg;
    }
    void print()
    {
        std::cout << i << std::endl;
    }
private:
    int i;
};

int main()
{
    thread_class thr(100);
    std::thread t(&thread_class::set, &thr, 3);
    t.join();
    thr.print();
}
