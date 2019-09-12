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

    void print()
    {
        std::cout << "Value = " << data << std::endl;
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

    x->print();
    y->print();
    z->print();
    a->print();

    Ptr *ptr = new Ptr();
    std::shared_ptr<Ptr> x1(ptr);
    std::shared_ptr<Ptr> x2(ptr);
    std::cout << "---------- 4 ----------" << std::endl;
    std::cout << "x1.use_count = " << x1.use_count() << std::endl;
    std::cout << "x2.use_count = " << x2.use_count() << std::endl;
    std::cout << "This should report fatal error for double free" << std::endl;

    return 0;
}
