#include <iostream>
#include <memory>

int main(void)
{
    std::shared_ptr<int> x { new int(20) };
    std::shared_ptr<int> y(x);

    std::cout << *x << std::endl;
    std::cout << *y << std::endl;

    return 0;
}
