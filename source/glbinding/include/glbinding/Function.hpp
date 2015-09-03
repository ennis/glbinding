#pragma once

#include <glbinding/Function.h>

#include <cassert>
#include <utility>
#include <functional>
#include <memory>

#include <glbinding/Binding.h>
#include <glbinding/logging.h>
#include <glbinding/Value.h>
#include <glbinding/callbacks.h>


namespace glbinding
{

template <typename ReturnType, typename... Arguments>
struct FunctionHelper
{
    ReturnType call(const Function<ReturnType, Arguments...> * function, Arguments&&... arguments) const
    {
        std::unique_ptr<FunctionCall> functionCall{new FunctionCall(function)};

        if (function->isAnyEnabled(CallbackMask::Parameters | CallbackMask::Logging))
        {
            functionCall->parameters = createValues(std::forward<Arguments>(arguments)...);
        }

        if (function->isEnabled(CallbackMask::Before))
        {
            before(*functionCall);
        }

        if (function->m_beforeCallback)
        {
            function->m_beforeCallback(std::forward<Arguments>(arguments)...);
        }

        auto value = basicCall(function, std::forward<Arguments>(arguments)...);

        if (function->m_afterCallback)
        {
            function->m_afterCallback(value, std::forward<Arguments>(arguments)...);
        }

        if (function->isAnyEnabled(CallbackMask::ReturnValue | CallbackMask::Logging))
        {
            functionCall->returnValue = createValue(value);
        }

        if (function->isEnabled(CallbackMask::After))
        {
            after(*functionCall);
        }

        if(function->isEnabled(CallbackMask::Logging))
        {
            logging::log(functionCall.release());
        }

        return value;
    }

    ReturnType basicCall(const Function<ReturnType, Arguments...> * function, Arguments&&... arguments) const
    {
        return reinterpret_cast<typename Function<ReturnType, Arguments...>::Signature>(function->address())(std::forward<Arguments>(arguments)...);
    }
};

template <typename... Arguments>
struct FunctionHelper<void, Arguments...>
{
    void call(const Function<void, Arguments...> * function, Arguments&&... arguments) const
    {
        std::unique_ptr<FunctionCall> functionCall(new FunctionCall(function));

        if (function->isAnyEnabled(CallbackMask::Parameters | CallbackMask::Logging))
        {
            functionCall->parameters = createValues(std::forward<Arguments>(arguments)...);
        }

        if (function->isEnabled(CallbackMask::Before))
        {
            before(*functionCall);
        }

        if (function->m_beforeCallback)
        {
            function->m_beforeCallback(std::forward<Arguments>(arguments)...);
        }

        basicCall(function, std::forward<Arguments>(arguments)...);

        if (function->m_afterCallback)
        {
            function->m_afterCallback(std::forward<Arguments>(arguments)...);
        }

        if (function->isEnabled(CallbackMask::After))
        {
            after(*functionCall);
        }

        if(function->isEnabled(CallbackMask::Logging))
        {
            logging::log(functionCall.release());
        }
    }

    void basicCall(const Function<void, Arguments...> * function, Arguments&&... arguments) const
    {
        reinterpret_cast<typename Function<void, Arguments...>::Signature>(function->address())(std::forward<Arguments>(arguments)...);
    }
};


template <typename ReturnType, typename... Arguments>
Function<ReturnType, Arguments...>::Function(const char * _name)
: AbstractFunction{_name}
, m_beforeCallback{nullptr}
, m_afterCallback{nullptr}
{
}

template <typename ReturnType, typename... Arguments>
ReturnType Function<ReturnType, Arguments...>::operator()(Arguments&... arguments) const
{
    auto myAddress = address();

    if (myAddress != nullptr)
    {
        if (isAnyEnabled(CallbackMask::Before | CallbackMask::After | CallbackMask::Logging))
        {
            return FunctionHelper<ReturnType, Arguments...>().call(this, std::forward<Arguments>(arguments)...);
        }
        else
        {
            return FunctionHelper<ReturnType, Arguments...>().basicCall(this, std::forward<Arguments>(arguments)...);
        }
    }
    else
    {
         if (isEnabled(CallbackMask::Unresolved))
         {
            glbinding::unresolved(this);
         }

         return ReturnType();
    }
}

template <typename ReturnType, typename... Arguments>
ReturnType Function<ReturnType, Arguments...>::directCall(Arguments... arguments) const
{
    return FunctionHelper<ReturnType, Arguments...>().basicCall(this, std::forward<Arguments>(arguments)...);
}

template <typename ReturnType, typename... Arguments>
void Function<ReturnType, Arguments...>::setBeforeCallback(BeforeCallback callback)
{
    m_beforeCallback = std::move(callback);
}

template <typename ReturnType, typename... Arguments>
void Function<ReturnType, Arguments...>::clearBeforeCallback()
{
    m_beforeCallback = nullptr;
}

template <typename ReturnType, typename... Arguments>
void Function<ReturnType, Arguments...>::setAfterCallback(AfterCallback callback)
{
    m_afterCallback = std::move(callback);
}

template <typename ReturnType, typename... Arguments>
void Function<ReturnType, Arguments...>::clearAfterCallback()
{
    m_afterCallback = nullptr;
}

template <typename ReturnType, typename... Arguments>
bool Function<ReturnType, Arguments...>::hasState() const
{
    return hasState(Binding::currentPos());
}

template <typename ReturnType, typename... Arguments>
bool Function<ReturnType, Arguments...>::hasState(const int pos) const
{
    return pos > -1 && Binding::s_maxpos <= pos;
}

template <typename ReturnType, typename... Arguments>
State & Function<ReturnType, Arguments...>::state() const
{
    return state(Binding::currentPos());
}

template <typename ReturnType, typename... Arguments>
State & Function<ReturnType, Arguments...>::state(const int pos) const
{
    assert(Binding::s_maxpos >= pos);
    assert(pos > -1);

    return m_states.at(pos);
}

template <typename ReturnType, typename... Arguments>
void Function<ReturnType, Arguments...>::resizeStates(int count)
{
    m_states.resize(static_cast<std::size_t>(count));
}

} // namespace glbinding
