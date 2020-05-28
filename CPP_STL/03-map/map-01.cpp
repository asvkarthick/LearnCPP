#include <iostream>
#include <map>
#include <string>

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

    return 0;
}
