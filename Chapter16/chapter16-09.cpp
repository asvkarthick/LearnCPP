#include <iostream>

class C
{
    int x;
    static int defX;
public:
    C() : x{defX} {}

    C(int a) : x{a} {}

    static void setX(int a)
    {
        defX = a;
    }

    int get()
    {
        return x;
    }

    void set(int a)
    {
        x = a;
    }
};

int C::defX = 0;

int main(void)
{
    C a;

    std::cout << a.get() << std::endl;

    C::setX(100);

    C b;

    std::cout << b.get() << std::endl;

    b.set(200);
    std::cout << b.get() << std::endl;

    C c{500};
    std::cout << c.get() << std::endl;

    return 0;
}
