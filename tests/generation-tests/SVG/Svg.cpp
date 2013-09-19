
#include "Svg.hpp"
#include <SVG/SvgFile.hpp>
#include <SVG/Element.hpp>

using namespace SVG;

Svg::Svg() : 
	m_owner_SVG(),
    m_children(),
    m_namespace(),
    m_version(),
    m_baseProfile()
{
}

Svg::~Svg()
{
}

void Svg::setNamespace(namespace_t _namespace)
{
	m_namespace = _namespace;;
}

namespace_t Svg::getNamespace() const
{
	return m_namespace;
}

void Svg::setVersion(version_t _version)
{
	m_version = _version;;
}

version_t Svg::getVersion() const
{
	return m_version;
}

void Svg::setBaseProfile(baseProfile_t _baseProfile)
{
	m_baseProfile = _baseProfile;;
}

baseProfile_t Svg::getBaseProfile() const
{
	return m_baseProfile;
}



