#include <iostream>

class C
{
private:
    int a, b;
public:
    C() : a{0}, b{0}
    {
        std::cout << "Default constructor called." << std::endl;
    }

    C(int x, int y) : a{x}, b{y}
    {
        std::cout << "Copy constructor called.\n";
    }

};

int main(void)
{
    C a{10, 20};

    C b;

    C c = a;
    b = c;

    return 0;
}
