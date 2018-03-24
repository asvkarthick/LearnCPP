// Multimap
#include <iostream>
#include <map>

int main(void)
{
    std::multimap<std::string, int> col;

    col = { {"Karthick", 1},
            {"Kumaran", 2},
            {"ASV", 3}};

    for(const auto& elem : col)
        std::cout << elem.first << ", " << elem.second << std::endl;

    col.insert({ {"Rashila", 4}, {"Akshara", 5}});

    for(const auto& elem : col)
        std::cout << elem.first << ", " << elem.second << std::endl;

    return 0;
}
