#pragma once

#include <glbinding/glbinding_api.h>

#include <glbinding/callbacks.h>


namespace glbinding 
{

namespace logging
{
    GLBINDING_API void resize(const unsigned int);

    GLBINDING_API void start();
    GLBINDING_API void start(const std::string & filepath);
    GLBINDING_API void stop();

    using BufferType = FunctionCall*;
    GLBINDING_API void log(BufferType call);
}


} // namespace glbinding
