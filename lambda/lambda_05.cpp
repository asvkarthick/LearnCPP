#include <iostream>

int main()
{
    int x = 2, y = 3;

    auto l = [x, &y] {
        // x++; // Cannot modify x because it is read-only
        y++;
    };

    std::cout << x << ", " << y << std::endl;
    l();
    std::cout << x << ", " << y << std::endl;

    return 0;
}
