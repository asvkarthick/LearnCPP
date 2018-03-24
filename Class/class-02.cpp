#include <iostream>

class A
{
public:
    A() : a{0} {}
    void show()
    {
        std::cout << "A = " << a << std::endl;
    }
    virtual void set(int) = 0;
private:
    int a;
};

class B: public A
{
public:
    B() : b{0} {}
    void show()
    {
        std::cout << "B = " << b << std::endl;
    }
    void set(int x)
    {
        b = x;
    }
private:
    int b;
};

int main(void)
{
    A* a;
    B b;

    a = &b;
    a->set(100);
    a->show();

    return 0;
}
