#include <iostream>
#include <map>
#include <string>
#include <algorithm>

int main(void)
{
    std::map<int, std::string> intstring_map;
    int num = 0;
    std::string str;

    do {
        std::cout << "Enter number : ";
        std::cin >> num;
        if(num > 0) {
            std::cout << "Enter name : ";
            std::cin >> str;
            intstring_map[num] = str;
        }
    } while(num > 0);

    for(auto x : intstring_map)
        std::cout << x.first << " : " << x.second << std::endl;

    std::cout << "Check if num is in the map. Enter num : ";
    std::cin >> num;

    auto pos = intstring_map.find(num);
    if(pos != intstring_map.end())
        std::cout << "Name = " << pos->second << std::endl;
    else
        std::cout << "Number not found" << std::endl;

    return 0;
}
