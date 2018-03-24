#include <iostream>

class C
{
    int x;
    int y;
public:
    void print()
    {
        std::cout << x << ", " << y << std::endl;
    }

    void set(int a, int b)
    {
        x = a;
        y = b;
    }
};

int main(void)
{
    C c{};

    c.print();
    c.set(10, 20);
    c.print();

    return 0;
}
