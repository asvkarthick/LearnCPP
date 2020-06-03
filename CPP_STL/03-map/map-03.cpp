#include <iostream>
#include <map>
#include <list>
#include <string>

void print(std::map<int, std::list<std::string>> &s)
{
    auto itr = s.begin();
    while (itr != s.end()) {
        auto l = itr->second;
        auto l_itr = l.begin();

        std::cout << itr->first << "-----------" << std::endl;
        while (l_itr != l.end()) {
            std::cout << "\t" << *l_itr << std::endl;
            l_itr++;
        }
        itr++;
    }
}

int main(void)
{
    std::map<int, std::list<std::string>> class_students;
    std::list<std::string> s1 {"KK", "ASV"};
    std::list<std::string> s2 {"Karthick", "Kumaran"};

    class_students[0] = s1;
    class_students[1] = s2;
    class_students[2].push_back("ASVKK");
    class_students[2].push_back("ASVKARTHICK");

    std::cout << "Original Map" << std::endl;
    print(class_students);

    auto &var = class_students[2];
    auto itr = var.begin();
    var.erase(itr);
    std::cout << "Map after deletion" << std::endl;
    print(class_students);

    return 0;
}
