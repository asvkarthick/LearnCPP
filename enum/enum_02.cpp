#include <iostream>

enum class color : int
{
    red,
    green,
    blue
};

int main()
{
    std::cout << sizeof(color) << std::endl;

    return 0;
}
