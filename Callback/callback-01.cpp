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

class Two : public One
{
public:
    void Callback()
    {
        std::cout << __func__ << std::endl;
    }

    Two()
    {
        auto callback = std::bind(&Two::Callback, this);
        One::RegisterCallback(callback);
    }

    void Call()
    {
        One::Call();
    }
};

int main()
{
    Two t;
    t.Call();
    return 0;
}
