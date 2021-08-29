/* Map operations
 * Author : Karthick Kumaran
 * E-mail : asvkarthick@gmail.com
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q;
    std::map<std::string, int> studentMarks;

    std::cin >> q;

    for (int i = 0; i < q; i++) {
        int op, marks;
        std::string name;

        std::cin >> op;

        if (op == 1) {
            /* Insert */
            std::cin >> name;
            std::cin >> marks;
            // studentMarks.insert(std::make_pair(name, marks));
            studentMarks[name] += marks;
        } else if (op == 2) {
            /* Erase */
            std::cin >> name;
            studentMarks.erase(name);
        } else if (op == 3) {
            /* Find */
            std::cin >> name;
            auto it = studentMarks.find(name);
            if (it != studentMarks.end()) {
                std::cout << it->second << std::endl;
            } else {
                std::cout << 0 << std::endl;
            }
        }
    }
    return 0;
}
