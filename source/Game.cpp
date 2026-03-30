#include <iostream>

#include "Game.h"

#include "GLFW/glfw3.h"

bool Game::Init()
{
    return true;
}

void Game::Update(float deltaTime)
{
    auto &input = ENG::Engine::GetInstance().GetInputManager();

    if (input.IsKeyPressed(GLFW_KEY_A)) {
        std::cout << "[A] Button is pressed" << "\n";
    }
}

void Game::Destroy() {}
