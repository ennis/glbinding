#pragma once

#include <string>
#include <set>
#include <vector>

#include <glbinding/glbinding_api.h>

#include <glbinding/ProcAddress.h>
#include <glbinding/State.h>
#include <glbinding/callbacks.h>


namespace glbinding
{

class GLBINDING_API AbstractFunction
{
public:
    AbstractFunction(const char * name);
    virtual ~AbstractFunction();

    const char * name() const;

    void resolveAddress();
    bool isResolved() const;

    ProcAddress address() const;

    virtual void resizeStates(int pos) = 0;

    virtual bool hasState() const = 0;
    virtual bool hasState(int pos) const = 0;

    virtual State & state() const = 0;
    virtual State & state(int pos) const = 0;

public:
    CallbackMask callbackMask() const;
    void setCallbackMask(CallbackMask mask);
    void addCallbackMask(CallbackMask mask);
    void removeCallbackMask(CallbackMask mask);

protected:
    bool isEnabled(CallbackMask mask) const;
    bool isAnyEnabled(CallbackMask mask) const;

protected:
    const char * m_name;
};

} // namespace glbinding
