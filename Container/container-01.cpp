#include <iostream>
#include <vector>

int main()
{
    int carray[] = {1, 2, 3, 4, 5, 6};
    std::vector<int> v(std::begin(carray), std::end(carray));

    for(auto i : v)
        std::cout << i << std::endl;

    return 0;
}
