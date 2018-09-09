#include <iostream>
#include <memory>

int main(void)
{
    std::unique_ptr<int> x;

    x = std::make_unique<int>(20);

    std::cout << *x << std::endl;

    return 0;
}
