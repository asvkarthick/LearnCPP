#include <iostream>

int main()
{
    auto l = [] (const std::string &s) {
        std::cout << "First lambda: " << s << std::endl;
    };

    l("Karthick");

    return 0;
}
