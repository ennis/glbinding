#pragma once

#include <glbinding/glbinding_api.h>

#include <glbinding/ProcAddress.h>
#include <glbinding/callbacks.h>


namespace glbinding
{

class GLBINDING_API State
{
public:
    State();
    virtual ~State() = default;

    bool isInitialized() const;

    ProcAddress address() const;

    CallbackMask callbackMask() const;
    void setCallbackMask(CallbackMask mask);

    void resolve(const char * name);

    bool isResolved() const;

protected:
    ProcAddress m_address;
    bool m_initialized;

    CallbackMask m_callbackMask;
};

} // namespace glbinding
