#include <iostream>

class Singleton
{
public:
    static Singleton* getInstance()
    {
        if(instance == nullptr)
            instance = new Singleton();
        return instance;
    }

    static Singleton* instance;

private:
    Singleton()
    {
        std::cout << "Singleton constructor." << std::endl;
    }
};

Singleton* Singleton::instance = nullptr;

int main(void)
{
    Singleton* obj;

    obj = Singleton::getInstance();

    Singleton* obj2;
    obj2 = Singleton::getInstance();

    return 0;
}
