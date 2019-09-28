#include <iostream>

int main(void)
{
    int num;
    std::cout << "Enter a number : ";
    std::cin >> num;

    std::cout << "Decimal : " << std::dec << num << std::endl;
    std::cout << "Octal   : " << std::oct << num << std::endl;
    std::cout << "Hexadec : " << std::hex << num << std::endl;

    return 0;
}
