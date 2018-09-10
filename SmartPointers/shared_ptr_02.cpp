#include <iostream>
#include <memory>

int main(void)
{
    std::shared_ptr<int> x;
    std::shared_ptr<int> y;

    x = std::make_shared<int>(20);
    y = x;

    std::cout << *x << std::endl;
    std::cout << *y << std::endl;

    return 0;
}
