// Array
#include <iostream>
#include <array>

int main(void)
{
    std::array<int, 6> arr;
    int i;

    for(i = 0; i < 6; i++)
        arr[i] = i * 100;

    std::cout << "Array size = " << arr.size() << std::endl;

    for(i = 0; i < arr.size(); i++)
        std::cout << arr[i] << std::endl;

    for(auto& x : arr)
        std::cout << x << std::endl;

    for(auto x = arr.begin(); x != arr.end(); x++)
        std::cout << *x << std::endl;

    return 0;
}
