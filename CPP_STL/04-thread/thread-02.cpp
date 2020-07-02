#include <iostream>
#include <thread>

void threadFn(int x)
{
    std::cout << "Thread : " << x << std::endl;
}

int main(void)
{
    std::thread t(threadFn, 10);
    t.detach();

    std::this_thread::sleep_for(std::chrono::seconds(1));

    return 0;
}
