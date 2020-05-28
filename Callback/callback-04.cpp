// g++ callback-04.cpp -std=c++11

#include <iostream>
#include <memory>

typedef struct callback
{
    int (*func1)(int);
    int (*func2)(int);
} callback_t;

class Callback : public callback
{
public:
    Callback()
    {
        std::cout << "Callback constructor" << std::endl;
        func1 = add10;
        func2 = sub10;
    }

    ~Callback()
    {
        std::cout << "Callback destructor" << std::endl;
        func1 = nullptr;
        func2 = nullptr;
    }

    static int add10(int a)
    {
        return a + 10;
    }

    static int sub10(int a)
    {
        return a - 10;
    }
};

int main(void)
{
    std::cout << "Callback program" << std::endl;

    std::unique_ptr<Callback> c { new Callback };
    std::cout << c->func1(100) << std::endl;
    std::cout << c->func2(100) << std::endl;

    callback_t *cb = static_cast<callback_t*>(new Callback);
    std::cout << cb->func1(100) << std::endl;
    std::cout << cb->func2(100) << std::endl;
    delete cb;

    return 0;
}
