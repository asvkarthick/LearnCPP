#include <iostream>
#include <list>
#include <string>
#include <algorithm>

int main(void)
{
    std::list<std::string> streamList;
    unsigned int width, height, format;

    // Add list of streams converted to strings
    streamList.push_back("1920108033");
    streamList.push_back("2560192033");
    streamList.push_back("2592194433");
    streamList.push_back("128072033");
    streamList.push_back("4000300034");

    std::cout << "Enter width  : ";
    std::cin >> width;
    std::cout << "Enter height : ";
    std::cin >> height;
    std::cout << "Enter format : ";
    std::cin >> format;

    std::string s = std::to_string(width) + std::to_string(height) + std::to_string(format);
    std::cout << "String = " << s << std::endl;

    std::cout << "Stream list size = " << streamList.size() << std::endl;
    auto iterator = std::find(streamList.begin(), streamList.end(), s);
    if (iterator != streamList.end()) {
        std::cout << "Stream found in stream list" << std::endl;
    } else {
        std::cout << "Stream not found in stream list" << std::endl;
    }

    return 0;
}
