#include <iostream>
#include <stack>

int main(void)
{
    std::stack<int> s;
    s.push(100);
    s.push(200);
    s.push(300);

    while (!s.empty()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }

    return 0;
}
