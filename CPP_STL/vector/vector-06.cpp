#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> v;

    std::cout << "Size of vector = " << v.size() << std::endl;

    v.assign(10, 2);

    std::cout << "Size of vector = " << v.size() << std::endl;

    for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    // Inserting element at the beginning
    v.insert(v.begin(), 3);
    // Insert at the third position
    v.insert(v.begin() + 2, 5);

    // Pushing element to the end
    v.push_back(100);
    v.push_back(200);

    for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    // Popping the last element
    v.pop_back();

    for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    // Clear all the elements in the vector
    v.clear();
    std::cout << "Cleared all the elements in the vector" << std::endl;

    // Print all the elements
    for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    return 0;
}
