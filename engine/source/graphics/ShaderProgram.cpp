#include "ShaderProgram.h"

namespace ENG
{

ShaderProgram::ShaderProgram(GLuint shaderProgramID)
    : m_shaderProgramID(shaderProgramID)
{
}

ShaderProgram::~ShaderProgram()
{
    glDeleteProgram(m_shaderProgramID);
}

void ShaderProgram::Bind()
{
    glUseProgram(m_shaderProgramID);
}

GLint ShaderProgram::GetUniformLocation(const std::string &name)
{
    auto iter = m_uniformLocationCache.find(name);
    if (iter != m_uniformLocationCache.end()) {
        return iter->second;
    }
    GLint location               = glGetUniformLocation(m_shaderProgramID, name.c_str());
    m_uniformLocationCache[name] = location;

    return location;
}

void ShaderProgram::SetUnitform(const std::string &name, float value)
{
    auto location = GetUniformLocation(name);
    glUniform1f(location, value);
}

}  // namespace ENG
