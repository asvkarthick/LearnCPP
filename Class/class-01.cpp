#include <iostream>

class C
{
public:
    explicit C(int c) : var{c}
    {}

    C& get()
    {
        std::cout << "Var = " << var << std::endl;
        return *this;
    }
    C& set(int c)
    {
        var = c;
        return *this;
    }
private:
    int var;
};

int main(void)
{
    C c{10};

    c.get().get().get();
    c.set(100).get().set(20).get().set(30).get().get().get();

    return 0;
}
