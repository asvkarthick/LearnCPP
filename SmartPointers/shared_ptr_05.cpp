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

    std::cout << "---------- 1 ----------" << std::endl;
    std::cout << "x.use_count = " << x.use_count() << std::endl;
    std::cout << "y.use_count = " << y.use_count() << std::endl;

    x = std::make_shared<Ptr>(20);
    y = std::make_shared<Ptr>(10);

    std::cout << "---------- 2 ----------" << std::endl;
    std::cout << "x.use_count = " << x.use_count() << std::endl;
    std::cout << "y.use_count = " << y.use_count() << std::endl;

    std::shared_ptr<Ptr> z(x);
    std::cout << "---------- 3 ----------" << std::endl;
    std::cout << "x.use_count = " << x.use_count() << std::endl;
    std::cout << "y.use_count = " << y.use_count() << std::endl;
    std::cout << "z.use_count = " << z.use_count() << std::endl;

    std::shared_ptr<Ptr> &a = x;
    std::cout << "---------- 4 ----------" << std::endl;
    std::cout << "x.use_count = " << x.use_count() << std::endl;
    std::cout << "y.use_count = " << y.use_count() << std::endl;
    std::cout << "z.use_count = " << z.use_count() << std::endl;

    return 0;
}
