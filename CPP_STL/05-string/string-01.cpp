// Program to compare two strings

#include <iostream>

int main(void)
{
    std::string s1("Hello");
    std::string s2("hello");
    std::string s3("Hello");

    std::cout << "S1 == S2 is " << (s1.compare(s2) ? false : true) << std::endl;
    std::cout << "S1 == S3 is " << (s1.compare(s3) ? false : true) << std::endl;

    return 0;
}
