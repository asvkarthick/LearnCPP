#include <iostream>

class C
{
private:
    int x;
public:
    int read() const
    {
        return x;
    }

    int inc()
    {
        return ++x;
    }

    // Cannot modify object in const member function
    int incr() const
    {
        return ++x;
    }

    C(int i = 0) : x{i} {}
};

int main(void)
{
    C c(100);

    std::cout << c.read() << std::endl;
    std::cout << c.inc() << std::endl;
    std::cout << c.incr() << std::endl;

    return 0;
}
