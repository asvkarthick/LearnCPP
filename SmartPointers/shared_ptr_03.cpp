#include <iostream>
#include <memory>

class Ptr
{
public:
    Ptr() : data(0)
    {
        std::cout << "Constructor" << std::endl;
    }

    Ptr(int x) : data(x)
    {
        std::cout << "Constructing " << x << std::endl;
    }

    ~Ptr()
    {
        std::cout << "Destructing " << data << std::endl;
    }

private:
    int data;
};

int main(void)
{
    std::shared_ptr<Ptr> x;
    std::shared_ptr<Ptr> y;

    x = std::make_shared<Ptr>(20);
    y = std::make_shared<Ptr>(10);

    return 0;
}
