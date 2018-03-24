#include <iostream>

class C
{
public:
    void print()
    {
        std::cout << x << ", " << y << std::endl;
    }
// private:
    int x;
    int y;
};

int main(void)
{
    C c{10, 20};
    c.print();
    return 0;
}
