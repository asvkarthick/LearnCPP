#include <iostream>
#include <list>

int main(void)
{
    std::list<int> lst;

    lst.push_back(100);
    lst.push_back(200);
    lst.push_back(300);
    lst.push_back(400);
    lst.push_back(500);

    for(auto& x : lst)
        std::cout << x << std::endl;

    for(auto i = lst.begin(); i != lst.end(); i++)
    {
        if(*i == 200)
            lst.insert(i, 250);
    }

    for(auto& x : lst)
        std::cout << x << std::endl;

    return 0;
}
