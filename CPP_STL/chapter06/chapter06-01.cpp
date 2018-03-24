// Vector
#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> vec;
    int i;

    for(i = 0; i < 6; i++)
        vec.push_back(i * 100);

    std::cout << "Vector size = " << vec.size() << std::endl;

    for(i = 0; i < vec.size(); i++)
        std::cout << vec[i] << std::endl;

    for(auto& x : vec)
        std::cout << x << std::endl;

    for(auto x = vec.begin(); x != vec.end(); x++)
        std::cout << *x << std::endl;

    return 0;
}
