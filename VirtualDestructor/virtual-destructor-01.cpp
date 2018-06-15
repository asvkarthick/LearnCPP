#include <iostream>

// Derived class destructor will not be called

class Base
{
public:
    Base()
    {
        std::cout << __func__ << std::endl;
    }

    ~Base()
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
