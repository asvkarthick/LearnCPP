#include <iostream>

int main(void)
{
    char buf[] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07};

    std::cout << *(reinterpret_cast<unsigned int*>(buf)) << std::endl;
    return 0;
}
