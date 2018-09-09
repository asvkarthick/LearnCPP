#include <iostream>
#include <memory>

class Ptr
{
public:
    Ptr()
    {
        std::cout << "Constructor" << std::endl;
    }

    ~Ptr()
    {
        std::cout << "Destructor" << std::endl;
    }
};

int main(void)
{
    std::unique_ptr<Ptr> x;

    x = std::make_unique<Ptr>();

    return 0;
}
