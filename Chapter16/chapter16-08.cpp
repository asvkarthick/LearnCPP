#include <iostream>

class C
{
    int x;
public:
    C() : x{0} {}

    C(int a) : x{a} {}

    void set(int a)
    {
        this->x = a;
    }

    int get() const
    {
        return this->x;
    }
};

int main(void)
{
    C c{100};

    std::cout << c.get() << std::endl;
    c.set(200);
    std::cout << c.get() << std::endl;

    return 0;
}
