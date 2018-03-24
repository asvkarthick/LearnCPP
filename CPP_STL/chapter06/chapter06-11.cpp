#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

int main(void)
{
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::copy(v.crbegin(), v.crend(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    return 0;
}
