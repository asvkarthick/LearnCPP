// g++ program-02.cpp -std=c++14

#include <iostream>

template <typename F, typename T>
auto program2(F&& f, T val)
{
    return f(val);
}

auto func(int val)
{
    return val * val;
}

int main(void)
{
    std::cout << program2(func, 100) << std::endl;
    return 0;
}
