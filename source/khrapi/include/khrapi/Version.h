#pragma once

#include <string>
#include <set>
#include <utility>

#include <khrapi/AbstractVersion.h>


namespace khrapi
{

template <typename Api>
class Version : public AbstractVersion
{
public:
    Version();
    Version(int majorVersion, int minorVersion);

    Version(const Version & version);
    Version(Version && version);

    Version & operator=(const Version & version);
    Version & operator=(Version && version);

    inline bool operator< (const Version & version) const;
    inline bool operator> (const Version & version) const;
    inline bool operator==(const Version & version) const;
    inline bool operator!=(const Version & version) const;
    inline bool operator>=(const Version & version) const;
    inline bool operator<=(const Version & version) const;
};

} // namespace khrapi

#include <khrapi/Version.hpp>
