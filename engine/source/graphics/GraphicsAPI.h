#pragma once
#include <memory>
#include <string>

#include "GL/glew.h"
#include "graphics/ShaderProgram.h"

namespace ENG
{

class ShaderProgram;

class GraphicsAPI
{
public:
    std::shared_ptr<ShaderProgram> CreateShaderProgram(const std::string &vertexSource,
                                                       const std::string &fragmentSource);

    void BindShaderProgram(ShaderProgram *shaderProgram);
};
}  // namespace ENG
