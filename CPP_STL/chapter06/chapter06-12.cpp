#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>

int main()
{
    std::list<int> l;

    for(int i = 0; i < 6; i++)
    {
        l.push_back(i);
        l.push_front(i);
    }

    std::copy(l.cbegin(), l.cend(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    std::remove(l.begin(), l.end(), 2);
    std::copy(l.cbegin(), l.cend(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
}
