// Multiset
#include <iostream>
#include <set>

int main(void)
{
    std::multiset<std::string> col = {"Karthick", "Kumaran", "ASV"};

    col.insert({"Rashila", "Akshara"});

    for(const auto& elem : col)
        std::cout << elem << std::endl;

    return 0;
}
