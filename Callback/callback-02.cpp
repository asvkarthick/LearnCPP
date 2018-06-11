#include <iostream>
#include <functional>

class One
{
public:
    One()
    {
        callback = nullptr;
    }

    void RegisterCallback(std::function<void(void)> f)
    {
        callback = f;
    }

    void Call()
    {
        if(callback != nullptr) callback();
    }
private:
    std::function<void(void)> callback;
};

class Two
{
public:
    void Callback()
    {
        std::cout << __func__ << std::endl;
    }

    Two()
    {
        auto callback = std::bind(&Two::Callback, this);
        one.RegisterCallback(callback);
    }

    void Call()
    {
        one.Call();
    }
private:
    One one;
};

int main()
{
    Two t;
    t.Call();
    return 0;
}
