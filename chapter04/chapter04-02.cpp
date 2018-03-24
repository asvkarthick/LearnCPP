#include <iostream>
#include <string>

std::string compose(const std::string& name, const std::string& domain)
{
    return name + '@' + domain;
}

int main(void)
{
    std::cout << compose("asvkarthick", "gmail.com") << std::endl;
    return(0);
}
