#pragma once
#include "ENG.h"
#include "render/Material.h"

class Game : public ENG::Application
{
public:
    bool Init() override;
    void Update(float deltaTime) override;
    void Destroy() override;

private:
    ENG::Material m_material;
};
