#include <iostream>
#include <utility>

int main(void)
{
    std::pair<int, const char*> p(10, "Karthick");

    std::cout << p.first << ", "  << p.second << std::endl;
    return 0;
}
