#include <iostream>

class C
{
public:
    void operator()(int x, int y) const
    {
        std::cout << "Operator = " << x << ", " << y << std::endl;
    }
};

int main()
{
    C c;
    auto l = [] (int x, int y) {
        std::cout << "Lambda = " << x << ", " << y << std::endl;
    };

    l(20, 40);
    c(10, 30);

    return 0;
}
