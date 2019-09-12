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
    std::weak_ptr<Ptr> wp1;
    Ptr *ptr = new Ptr();

    {
        std::shared_ptr<Ptr> sp1(ptr);
        wp1 = sp1;
        std::cout << "sp1.use_count = " << sp1.use_count() << std::endl;

        {
            std::shared_ptr<Ptr> sp2 = wp1.lock();
            if(sp2 != nullptr)
            {
                std::cout << "wp1 promoted to sp2 successfully" << std::endl;
                sp2->print();
            }
        }
    }

    std::shared_ptr<Ptr> sp3 = wp1.lock();
    if(sp3 == nullptr)
    {
        std::cout << "wp1 promotion failed" << std::endl;
    }

    return 0;
}
