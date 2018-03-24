#include <future>
#include <iostream>

int task1()
{
   return 1 / 0;
}

int main() try
{
    std::future<int> f(std::async(task1));
    try {
        std::cout << "Thread returned: " << f.get() << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << "Main Exception: " << e.what() << std::endl;
    }
    return 0;
}
catch(const std::exception& e)
{
    std::cout << "Exception: " << e.what() << std::endl;
}
