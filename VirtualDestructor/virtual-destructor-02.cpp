#include <iostream>

// By making the base class destructor virtual destruction happens from derived class

class Base
{
public:
    Base()
    {
        std::cout << __func__ << std::endl;
    }

    virtual ~Base()
    {
        std::cout << __func__ << std::endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        std::cout << __func__ << std::endl;
    }

    ~Derived()
    {
        std::cout << __func__ << std::endl;
    }
};

int main(void)
{
    Base* b = new Derived();

    delete b;
    return 0;
}
