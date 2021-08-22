/* Program to demonstrate basic C++11 Queue APIs
 * Author : Karthick Kumaran
 * E-mail : asvkarthick@gmail.com
 */

#include <iostream>
#include <queue>

int main(void)
{
    std::queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(15);
    q.push(25);

    std::cout << "Queue size = " << q.size() << std::endl;
    std::cout << "Queue front = " << q.front() << std::endl;
    std::cout << "Queue back = " << q.back() << std::endl;

    while (!q.empty()) {
        std::cout << q.front() << std::endl;
	q.pop();
    }

    return 0;
}
