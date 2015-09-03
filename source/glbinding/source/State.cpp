
#include <glbinding/State.h>

#include <glbinding/ProcAddress.h>


namespace glbinding
{

State::State()
: m_address{nullptr}
, m_initialized{false}
, m_callbackMask{CallbackMask::None}
{
}

void State::resolve(const char * name)
{
    if (m_initialized)
    {
        return;
    }

    m_address = getProcAddress(name);
    m_initialized = true;
}

ProcAddress State::address() const
{
    if (!m_initialized)
    {
        return nullptr;
    }

    return m_address;
}

bool State::isInitialized() const
{
    return m_initialized;
}

bool State::isResolved() const
{
    return m_address != nullptr;
}

CallbackMask State::callbackMask() const
{
    return m_callbackMask;
}

void State::setCallbackMask(CallbackMask mask)
{
    m_callbackMask = mask;
}

} // namespace glbinding
