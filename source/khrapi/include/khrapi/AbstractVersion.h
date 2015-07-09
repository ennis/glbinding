#pragma once

#include <string>
#include <set>
#include <utility>

#include <khrapi/khrapi_api.h>


namespace khrapi
{

class KHRAPI_API AbstractVersion
{
public:
    AbstractVersion();
    AbstractVersion(int majorVersion, int minorVersion);

    AbstractVersion(const AbstractVersion & version);
    AbstractVersion(AbstractVersion && version);

    operator std::pair<unsigned char,  unsigned char> () const;
    operator std::pair<unsigned short, unsigned short>() const;
    operator std::pair<unsigned int,   unsigned int>  () const;

    std::string toString() const;

    bool isNull() const;
public:
    int m_major;
    int m_minor;
};

std::ostream & operator<<(std::ostream & stream, const AbstractVersion & version);

} // namespace khrapi
