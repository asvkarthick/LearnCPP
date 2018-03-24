// Multimap
#include <iostream>
#include <map>

int main(void)
{
    std::multimap<int, std::string> col;

    col = { {1, "Karthick"},
            {2, "Kumaran"},
            {3, "ASV"}};

    for(const auto& elem : col)
        std::cout << elem.first << ", " << elem.second << std::endl;

    col.insert({{4, "Akshara"}, {5, "Rashila"}});

    for(const auto& elem : col)
        std::cout << elem.first << ", " << elem.second << std::endl;

    return 0;
}
