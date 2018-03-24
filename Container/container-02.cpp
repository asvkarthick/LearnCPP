#include <iostream>
#include <vector>

int main()
{
    int carray[] = {1, 2, 3, 4, 5, 6};
    std::vector<int> v(std::make_move_iterator(std::begin(carray)), std::make_move_iterator(std::end(carray)));

    for(auto i : v)
        std::cout << i << std::endl;

    for(int i = 0; i < 6; i++)
        std::cout << carray[i] << std::endl;

    return 0;
}
