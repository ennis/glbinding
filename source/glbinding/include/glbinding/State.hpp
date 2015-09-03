#pragma once

#include <glbinding/State.h>

#include <glbinding/ProcAddress.h>


namespace glbinding
{

template <typename Binding>
void State<Binding>::resolve(const char * name)
{
    if (m_initialized)
    {
        return;
    }

    m_address = getProcAddress(name);
    m_initialized = true;
}

} // namespace glbinding
