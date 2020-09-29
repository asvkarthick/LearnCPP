#include <map>
#include <iostream>

class Camera
{
public:
    Camera(std::map<std::string, int>& m) : pr(m)
    {
        std::cout << "Camera instance created" << std::endl;
    }

    ~Camera()
    {
        std::cout << "Camera instance destructed" << std::endl;
    }

    void printMap()
    {
        std::cout << "Printing map contents" << std::endl;
        for (auto &x : pr)
            std::cout << x.first << " : " << x.second << std::endl;
    }

private:
    std::map<std::string, int> &pr;
};

class CameraStack
{
public:
    CameraStack() : mObj(nullptr)
    {
        std::cout << "Camera stack instance created" << std::endl;
        priorities["A"] = 1;
        priorities["B"] = 2;
    }

    ~CameraStack()
    {
        std::cout << "Camera stack instance destructed" << std::endl;
    }

    void createCamera()
    {
        mObj = new Camera(priorities);
    }

    void printMap()
    {
        if (mObj) mObj->printMap();
    }

private:
    Camera *mObj;
    std::map<std::string, int> priorities;
};

int main(void)
{
    std::cout << "Map reference program" << std::endl;
    CameraStack cs;
    cs.createCamera();
    cs.printMap();
}
