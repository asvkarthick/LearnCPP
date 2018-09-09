#include <iostream>
#include <memory>

int main(void)
{
    std::unique_ptr<int> x { new int(20) };

    std::cout << *x << std::endl;

    return 0;
}
