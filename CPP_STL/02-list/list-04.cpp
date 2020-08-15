#include <iostream>
#include <list>

int main(void)
{
    std::list<int> l;

    l.push_back(100);
    l.push_back(10);
    l.push_front(200);

    for(auto x : l)
        std::cout << x << std::endl;

    return 0;
}
