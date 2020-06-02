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
    l.push_back(30);
    l.push_back(40);
    std::cout << "Size of list = " << l.size() << std::endl;
    print_list(l);
    std::cout << "Deleting first two elements" << std::endl;
    auto pos = l.begin();
    l.erase(pos);
    pos++;
    l.erase(pos);
    print_list(l);

    return 0;
}
