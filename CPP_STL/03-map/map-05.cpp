#include <iostream>
#include <map>
#include <unordered_map>

void print_map(std::map<int, int> &m)
{
    std::cout << "Printing map" << std::endl;

    for (auto &x : m)
        std::cout << x.first << " : " << x.second << std::endl;
}

void print_map(std::unordered_map<int, int> &m)
{
    std::cout << "Printing unordered map" << std::endl;

    for (auto &x : m)
        std::cout << x.first << " : " << x.second << std::endl;
}

int main(void)
{
    std::map<int, int> om;
    std::unordered_map<int, int> um;
    int n;

    do {
        std::cout << "Enter n : ";
        std::cin >> n;

        om[n] = n;
        um[n] = n;
    } while (n > 0);

    print_map(om);
    print_map(um);

    return 0;
}
