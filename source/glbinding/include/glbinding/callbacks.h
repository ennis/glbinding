#pragma once

#include <set>
#include <vector>
#include <functional>
#include <string>
#include <chrono>

#include <glbinding/glbinding_api.h>


namespace glbinding
{

class AbstractFunction;
class AbstractValue;

struct GLBINDING_API FunctionCall
{
    FunctionCall(const AbstractFunction * _function = nullptr);
    ~FunctionCall();

    FunctionCall(FunctionCall && other);

    FunctionCall & operator=(const FunctionCall &) = delete;

    std::string toString() const;

    const AbstractFunction * function;
    std::chrono::system_clock::time_point timestamp;

    std::vector<AbstractValue *> parameters;
    AbstractValue * returnValue;
};

enum class CallbackMask : unsigned char
{
    None        = 0,
    Unresolved  = 1 << 0,
    Before      = 1 << 1,
    After       = 1 << 2,
    Parameters  = 1 << 3,
    ReturnValue = 1 << 4,
    Logging     = 1 << 5,
    ParametersAndReturnValue = Parameters | ReturnValue,
    BeforeAndAfter = Before | After
};

GLBINDING_API CallbackMask operator|(CallbackMask a, CallbackMask b);
GLBINDING_API CallbackMask operator~(CallbackMask a);
GLBINDING_API CallbackMask operator&(CallbackMask a, CallbackMask b);
GLBINDING_API CallbackMask& operator|=(CallbackMask& a, CallbackMask b);
GLBINDING_API CallbackMask& operator&=(CallbackMask& a, CallbackMask b);

using SimpleFunctionCallback = std::function<void(const AbstractFunction &)>;
using FunctionCallback = std::function<void(const FunctionCall &)>;

GLBINDING_API void setUnresolvedCallback(SimpleFunctionCallback callback);

GLBINDING_API void setBeforeCallback(FunctionCallback callback);
GLBINDING_API void setAfterCallback(FunctionCallback callback);

GLBINDING_API void unresolved(const AbstractFunction * function);
GLBINDING_API void before(const FunctionCall & call);
GLBINDING_API void after(const FunctionCall & call);

} // namespace glbinding
