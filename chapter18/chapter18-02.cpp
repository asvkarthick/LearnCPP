#include <iostream>

class C
{
    int var;
public:
    C(int a) : var{a} {}

    int get()
    {
        return var;
    }
};

int main(void)
{
    C a{10}, b{20};

    std::cout << a.get() << std::endl;
    std::cout << b.get() << std::endl;

    C c{};

    c = a + b;

    std::cout << c.get() << std::endl;

    return 0;
}
