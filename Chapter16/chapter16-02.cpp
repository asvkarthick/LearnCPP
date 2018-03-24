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

    C(C& c) = delete;

};

int main(void)
{
    C a{10, 20};

    C b;

    // Should not use the below statements when we delete copy constructor
    // C c = a;
    // b = c;

    return 0;
}
