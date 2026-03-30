#pragma once
#include <chrono>
#include <memory>

#include "input/InputManager.h"

struct GLFWwindow;

namespace ENG
{

class Application;

class Engine
{
public:
    static Engine &GetInstance();

    Engine()                          = default;
    Engine(const Engine &)            = delete;
    Engine(Engine &&)                 = delete;
    Engine &operator=(const Engine &) = delete;
    Engine &operator=(Engine &&)      = delete;

    bool Init(int width, int height);
    void Run();
    void Destroy();

    void          SetApplication(Application *app);
    Application  *GetApplication();
    InputManager &GetInputManager();

private:
    std::unique_ptr<Application>          m_application;
    std::chrono::steady_clock::time_point m_lastTimePoint;
    GLFWwindow                           *m_window = nullptr;
    InputManager                          m_inputManager;
};

}  // namespace ENG
