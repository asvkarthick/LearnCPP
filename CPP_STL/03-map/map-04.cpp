#include <iostream>
#include <map>
#include <list>
#include <string>

void print(std::map<int, std::map<int, std::string>> &s)
{
    auto itr = s.begin();
    while (itr != s.end()) {
        auto l = itr->second;
        auto l_itr = l.begin();

        std::cout << itr->first << "-----------" << std::endl;
        while (l_itr != l.end()) {
            std::cout << "\t" << l_itr->first << " <-> " << l_itr->second << std::endl;
            l_itr++;
        }
        itr++;
    }
}

int main(void)
{
    std::map<int, std::map<int, std::string>> num_map;

    num_map[0].insert(std::make_pair(1, "One"));
    num_map[0].insert(std::make_pair(2, "Two"));
    num_map[0].insert(std::make_pair(3, "Three"));

    num_map[1].insert(std::make_pair(4, "Four"));
    num_map[1].insert(std::make_pair(5, "Five"));
    num_map[1].insert(std::make_pair(6, "Six"));

    num_map[2].insert(std::make_pair(7, "Seven"));
    num_map[2].insert(std::make_pair(8, "Eight"));
    num_map[2].insert(std::make_pair(9, "Nine"));

    std::cout << "Original Map" << std::endl;
    print(num_map);

    auto &num_map2 = num_map[0];
    auto pos = num_map2.find(3);
    if (pos != num_map2.end()) num_map2.erase(pos);

    std::cout << "Map after deletion" << std::endl;
    print(num_map);

    auto pos2 = num_map.find(1);
    if(pos2 != num_map.end()) num_map.erase(pos2);

    std::cout << "Map after second deletion" << std::endl;
    print(num_map);

    return 0;
}
