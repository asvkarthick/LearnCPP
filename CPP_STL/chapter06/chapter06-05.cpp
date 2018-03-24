// List
#include <iostream>
#include <list>

int main(void)
{
    std::list<int> lst;
    int i;

    for(i = 0; i < 6; i++)
        lst.push_back(i * 100);
    for(i = 0; i < 6; i++)
        lst.push_front(-i * 100);

    std::cout << "List size = " << lst.size() << std::endl;

    for(auto& x : lst)
        std::cout << x << std::endl;
    for(auto x = lst.begin(); x != lst.end(); x++)
        std::cout << *x << std::endl;


    std::cout << "Front elem = " << lst.front() << std::endl;
    std::cout << "Back  elem = " << lst.back() << std::endl;

    while(!lst.empty())
    {
        std::cout << "Front elem = " << lst.front() << std::endl;
        lst.pop_front();
    }

    for(i = 0; i < 6; i++)
        lst.push_back(i * 100);
    for(i = 0; i < 6; i++)
        lst.push_front(-i * 100);

    while(!lst.empty())
    {
        std::cout << "Back  elem = " << lst.back() << std::endl;
        lst.pop_back();
    }

    return 0;
}
