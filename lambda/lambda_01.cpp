#include <iostream>

int main()
{
    [] {
        std::cout << "First lambda " << std::endl;
    } ();

    return 0;
}
