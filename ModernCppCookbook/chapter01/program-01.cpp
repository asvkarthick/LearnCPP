// g++ program-01.cpp -std=c++14

#include <iostream>

int main(void)
{
    auto lambda = [](auto const a, auto const b) { return a + b; };

    std::cout << lambda(10, 20) << std::endl;

    return 0;
}
