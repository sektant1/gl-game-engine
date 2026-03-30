#include <iostream>

#include "Game.h"

bool Game::Init()
{
    return true;
}

void Game::Update(float deltaTime)
{
    std::cout << "Current delta: " << deltaTime << "\n";
}

void Game::Destroy() {}
