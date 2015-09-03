
#include <glbinding/Version.h>

#include <ostream>
#include <sstream>


namespace glbinding
{

Version::Version()
: m_major{0}
, m_minor{0}
{
}

Version::Version(const int majorVersion, const int minorVersion)
: m_major{majorVersion}
, m_minor{minorVersion}
{
}

Version::Version(const Version & version)
: m_major{version.m_major}
, m_minor{version.m_minor}
{
}

Version::Version(Version && version)
: m_major{std::move(version.m_major)}
, m_minor{std::move(version.m_minor)}
{
}

bool Version::isValid() const
{
    return s_validVersions.find(*this) != s_validVersions.end();
}

const Version & Version::nearest() const
{
    auto iterator = s_validVersions.lower_bound(*this);

    if (iterator == s_validVersions.end())
    {
        return *(--iterator);
    }

    return *iterator;
}

const Version & Version::latest()
{
    return s_latest;
}

const std::set<Version> & Version::versions()
{
    return s_validVersions;
}

Version::operator std::pair<unsigned char, unsigned char>() const
{
    return std::make_pair(m_major, m_minor);
}

Version::operator std::pair<unsigned short, unsigned short>() const
{
    return std::make_pair(m_major, m_minor);
}

Version::operator std::pair<unsigned int, unsigned int>() const
{
    return std::make_pair(m_major, m_minor);
}

std::string Version::toString() const
{
    std::stringstream stream;
    if (0 == m_major)
    {
        stream << "-.-";
    }
    else
    {
        stream << static_cast<int>(m_major) << "." << static_cast<int>(m_minor);
    }

    return stream.str();
}

bool Version::isNull() const
{
    return m_major == 0 && m_minor == 0;
}

std::ostream & operator<<(std::ostream & stream, const Version & version)
{
    stream << version.toString();
    return stream;
}


Version & Version::operator=(const Version & version)
{
	m_major = version.m_major;
	m_minor = version.m_minor;

	return *this;
}

Version & Version::operator=(Version && version)
{
	m_major = std::move(version.m_major);
	m_minor = std::move(version.m_minor);

	return *this;
}

inline bool Version::operator<(const Version & version) const
{
	return m_major < version.m_major
		|| (m_major == version.m_major && m_minor < version.m_minor);
}

inline bool Version::operator>(const Version & version) const
{
	return m_major > version.m_major
		|| (m_major == version.m_major && m_minor > version.m_minor);
}

inline bool Version::operator==(const Version & version) const
{
	return m_major == version.m_major
		&& m_minor == version.m_minor;
}

inline bool Version::operator!=(const Version & version) const
{
	return m_major != version.m_major
		|| m_minor != version.m_minor;
}

inline bool Version::operator>=(const Version & version) const
{
	return *this > version || *this == version;
}

inline bool Version::operator<=(const Version & version) const
{
	return *this < version || *this == version;
}

} // namespace glbinding
