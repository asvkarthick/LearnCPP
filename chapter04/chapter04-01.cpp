#include <iostream>
#include <string>
#include <list>

int main(void)
{
    std::list<std::string> lst {"Karthick", "Kumaran", "ASV"};

    for(auto& x : lst)
        std::cout << x << std::endl;

    for(auto i = lst.begin(); i != lst.end(); i++)
        std::cout << *i << std::endl;

    return 0;
}
