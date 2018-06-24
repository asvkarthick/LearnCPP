#include <iostream>

template<typename T>
void func(T x)
{
    std::cout << x << std::endl;
}

int main(void)
{
    func<int>(65);
    func<char>(65);
    func(65);

    return 0;
}
