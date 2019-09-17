#include <iostream>

class A
{
public:
    void set(int data)
    {
        mData = data;
    }

    int get()
    {
        return mData;
    }
private:
    int mData;
};

class B
{
public:
    int get()
    {
        return mData;
    }
private:
    int mData;
};

int main(void)
{
    A *a = new A();
    a->set(100);
    B *b = reinterpret_cast<B*>(a);
    std::cout << b->get() << std::endl;

    delete a;

    return 0;
}
