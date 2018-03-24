// Deque - Double ended queue
#include <iostream>
#include <deque>

int main(void)
{
    std::deque<int> dq;
    int i;

    for(i = 0; i < 6; i++)
        dq.push_back(i * 100);

    for(i = 0; i < 6; i++)
        dq.push_front(-i * 100);

    std::cout << "Deque size = " << dq.size() << std::endl;

    for(i = 0; i < dq.size(); i++)
        std::cout << dq[i] << std::endl;

    for(auto& x : dq)
        std::cout << x << std::endl;

    for(auto x = dq.begin(); x != dq.end(); x++)
        std::cout << *x << std::endl;

    return 0;
}
