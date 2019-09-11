#include <iostream>

class Base
{
public:
    virtual void print()
    {
        std::cout << "Base class" << std::endl;
    }
};

class Derived : public Base
{
public:
    void print()
    {
        Base::print();
        std::cout << "Derived class" << std::endl;
    }
};

int main(void)
{
    Base b{};
    Derived d{};

    b.print();
    d.print();

    Base* bptr = &d;
    bptr->print();

    return 0;
}
