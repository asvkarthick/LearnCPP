/* Vector erase
 * Author : Karthick Kumaran
 * E-mail : asvkarthick@gmail.com
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    std::vector<int> v;

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        v.push_back(num);
    }

    int num1, num2, num3;
    std::cin >> num1;
    std::cin >> num2 >> num3;

    v.erase(v.begin() + num1 - 1);
    v.erase(v.begin() + num2 - 1, v.begin() + num3 - 1);

    std::cout << v.size() << std::endl;
    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    return 0;
}
