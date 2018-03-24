#include <iostream>

class Base
{
public:
    void print()
    {
        std::cout << "Base class" << std::endl;
    }
};

class Derived : public Base
{
public:
    void print()
    {
        std::cout << "Derived class" << std::endl;
    }
};

int main(void)
{
    Base b{};
    Derived d{};

    b.print();
    d.print();

    return 0;
}
