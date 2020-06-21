#include <iostream>
#include <map>
#include <unordered_map>

template<typename T>
void print_map(T &m)
{
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

    std::cout << "Printing items from ordered_map" << std::endl;
    print_map(om);
    std::cout << "Printing items from unordered_map" << std::endl;
    print_map(um);

    return 0;
}
