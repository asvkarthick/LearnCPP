#include <iostream>

class Base
{
public:
    Base()
    {
        std::cout << "Base constructor" << std::endl;
    }

    virtual void print()
    {
        std::cout << "Base class" << std::endl;
    }

    // virtual is required here to call derived destructor when called with base pointer of derived object
    virtual ~Base()
    {
        std::cout << "Base Destructor" << std::endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        std::cout << "Derived constructor" << std::endl;
    }

    void print()
    {
        std::cout << "Derived class" << std::endl;
    }

    ~Derived()
    {
        std::cout << "Derived destructor" << std::endl;
    }
};

int main(void)
{
    Base* bptr = new Derived();
    bptr->print();
    delete bptr;

    return 0;
}
