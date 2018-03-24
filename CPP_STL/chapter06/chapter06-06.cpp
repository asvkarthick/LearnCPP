// Forward List
#include <iostream>
#include <forward_list>

int main(void)
{
    std::forward_list<int> lst;
    int i;

    for(i = 0; i < 6; i++)
        lst.push_front(i * 100);

    for(auto& x : lst)
        std::cout << x << std::endl;
    for(auto x = lst.begin(); x != lst.end(); x++)
        std::cout << *x << std::endl;

    while(!lst.empty())
    {
        std::cout << "Front elem = " << lst.front() << std::endl;
        lst.pop_front();
    }

    return 0;
}
