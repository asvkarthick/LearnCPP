#include <iostream>
#include <memory>

int main(void)
{
    std::unique_ptr<int> uptr(new int{100});
    std::unique_ptr<int> uptr2(new int{200});
    std::unique_ptr<int> uptr3;
    int* x{new int{20}};
    std::unique_ptr<std::string> us(new std::string("Karthick"));

    std::cout << *x << std::endl;
    std::cout << *uptr << std::endl;
    std::cout << *uptr2 << std::endl;
    std::cout << *us << std::endl;

    uptr3 = std::move(uptr);
    uptr  = std::move(uptr2);

    std::cout << *uptr3 << std::endl;
    std::cout << *uptr << std::endl;
    // std::cout << *uptr2 << std::endl; // Segmentation fault

    std::unique_ptr<int> uptr4{x};
    // std::unique_ptr<int> uptr5{x}; // double free

    std::cout << *uptr4 << std::endl;

    return 0;
}
