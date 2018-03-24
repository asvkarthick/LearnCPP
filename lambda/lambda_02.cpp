#include <iostream>

int main()
{
    auto l = [] {
        std::cout << "First lambda " << std::endl;
    };

    l();

    return 0;
}
