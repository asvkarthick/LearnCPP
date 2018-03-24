// Variadic templates

#include <iostream>

template<typename T>
void g(T x)
{
    std::cout << x << std::endl;
}

void f()
{}

template<typename T, typename... Tail>
void f(T head, Tail... tail)
{
    g(head);
    f(tail...);
}

int main(void)
{
    f(1, 2, 3, 5.0, "Karthick");
    // f(std::vector<int> v{1, 2, 3, 4}, "Kumaran", 100);

    return 0;
}
