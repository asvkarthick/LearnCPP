/* Set operations
 * Author : Karthick Kumaran
 * E-mail : asvkarthick@gmail.com
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q;
    std::set<int> s;

    std::cin >> q;

    for (int i = 0; i < q; i++) {
        int op, val;
        std::cin >> op;
        std::cin >> val;
        if (op == 1) {
            s.insert(val);
        } else if (op == 2) {
            s.erase(val);
        } else if (op == 3) {
            auto it = s.find(val);
            if (it != s.end()) {
                std::cout << "Yes" << std::endl;
            } else {
                std::cout << "No" << std::endl;
            }
        }
    }
    return 0;
}
