#pragma once

#include <chrono>
#include <memory>

struct GLFWwindow;

namespace ENG
{

class Application;

class Engine
{
public:
    bool Init(int width, int height);
    void Run();
    void Destroy();

    void         SetApplication(Application *app);
    Application *GetApplication();

private:
    std::unique_ptr<Application>          m_application;
    std::chrono::steady_clock::time_point m_lastTimePoint;
    GLFWwindow                           *m_window = nullptr;
};

}  // namespace ENG
