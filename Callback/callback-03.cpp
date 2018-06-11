#include <iostream>
#include <functional>

using namespace std::placeholders;

class One
{
public:
    One()
    {
        callback = nullptr;
    }

    void RegisterCallback(std::function<int (int, int)> f)
    {
        callback = f;
    }

    int Call(int a, int b)
    {
        if(callback != nullptr) return callback(a, b);
    }
private:
    std::function<int (int, int)> callback;
};

class Two
{
public:
    int Add(int a, int b)
    {
        std::cout << __func__ << std::endl;
        return a + b;
    }

    Two()
    {
        auto callback = std::bind(&Two::Add, this, _1, _2);
        one.RegisterCallback(callback);
    }

    int Call(int x, int y)
    {
        one.Call(x, y);
    }
private:
    One one;
};

int main()
{
    Two t;
    std::cout << t.Call(10, 20) << std::endl;
    return 0;
}
