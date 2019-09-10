#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> v;

    std::cout << "Size of vector = " << v.size() << std::endl;

    v.assign(10, 2);

    std::cout << "Size of vector = " << v.size() << std::endl;

    for(int i : v)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
