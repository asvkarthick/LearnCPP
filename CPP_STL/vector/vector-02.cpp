#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> v;

    std::cout << "Size of vector = " << v.size() << std::endl;

    v.assign(10, 2);

    std::cout << "Size of vector = " << v.size() << std::endl;

    for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    return 0;
}
