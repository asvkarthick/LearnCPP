#include <iostream>
#include <list>

void print_list(const std::list<int>& l)
{
    std::cout << "List contents are:" << std::endl;
    for(auto i : l)
        std::cout << i << " ";
    std::cout << std::endl;
}

int main(void)
{
    std::list<int> l;

    std::cout << "Size of list = " << l.size() << std::endl;
    l.push_back(10);
    l.push_back(20);
    std::cout << "Size of list = " << l.size() << std::endl;
    print_list(l);

    return 0;
}
