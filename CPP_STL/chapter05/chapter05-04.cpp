#include <iostream>
#include <memory>
#include <vector>

int main(void)
{
    std::shared_ptr<std::string> s1{new std::string("Karthick")};
    std::shared_ptr<std::string> s2{new std::string("Kumaran")};

    std::vector<std::shared_ptr<std::string>> vec;

    vec.push_back(s1);
    vec.push_back(s2);
    vec.push_back(s1);
    vec.push_back(s1);
    vec.push_back(s1);

    for(auto ptr : vec)
        std::cout << *ptr << std::endl;

    std::cout << vec[0].use_count() << std::endl;

    return 0;
}
