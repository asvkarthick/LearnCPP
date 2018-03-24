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
        std::cout << "Parameterized constructor called.\n";
    }

    C(C& c) : a{c.a}, b{c.b}
    {
        std::cout << "Copy constructor called.\n";
    }

    void operator=(C& c)
    {
        a = c.a;
        b = c.b;
        std::cout << "Copy assignment operator called.\n";
    }

    C(C&& c)
    {
        a = c.a;
        b = c.b;
        std::cout << "Move constructor called.\n";
    }

    void operator=(C&& c)
    {
        a = c.a;
        b = c.b;
        std::cout << "Move assignment called.\n";
    }

};

int main(void)
{
    C a{10, 20};

    C b;

    C c = a;
    b = c;

    C x = std::move(a);

    return 0;
}
