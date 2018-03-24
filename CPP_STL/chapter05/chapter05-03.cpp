#include <iostream>
#include <utility>
#include <vector>

int main(void)
{
    std::vector<std::pair<int, std::string>> v;

    v.push_back({1, "Karthick"});
    v.push_back({2, "Kumaran"});

    for(auto& i : v)
        std::cout << i.first << ", " << i.second << std::endl;

    return 0;
}
