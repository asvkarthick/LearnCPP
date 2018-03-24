// Algorithm
#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
void print(T t)
{
    for(auto& x : t)
        std::cout << x << std::endl;
}

template<typename T>
void print(std::initializer_list<T> t)
{
    for(auto& x : t)
        std::cout << x << std::endl;
}

int main(void)
{
    std::vector<int> vec{9, 8, 7, 6, 5, 4, 3, 2, 1};

    auto minelempos = std::min_element(vec.begin(), vec.end());
    auto maxelempos = std::max_element(vec.begin(), vec.end());

    std::cout << "Min element = " << *minelempos << std::endl;
    std::cout << "Max element = " << *maxelempos << std::endl;

    print(vec);
    print({11, 22, 33, 44, 55});
    print({"Karthick", "Kumaran", "ASV"});

    std::sort(vec.begin(), vec.end());
    print(vec);

    auto pos = std::find(vec.begin(), vec.end(), 3);
    std::reverse(pos, vec.end());
    print(vec);

    return 0;
}
