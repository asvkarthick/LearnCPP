#include <iostream>

int main(void)
{
    double d = 3.14;
    float f = static_cast<float>(d);
    int i = static_cast<int>(d);
    std::cout << d << std::endl;
    std::cout << f << std::endl;
    std::cout << i << std::endl;
    return 0;
}
