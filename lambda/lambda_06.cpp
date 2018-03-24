#include <iostream>

int main()
{
    int x = 2, y = 3;

    auto l = [&] {
        x++;
        y++;
    };

    std::cout << x << ", " << y << std::endl;
    l();
    std::cout << x << ", " << y << std::endl;

    return 0;
}
