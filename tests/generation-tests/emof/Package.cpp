
#include "Package.hpp"
#include <emof/Package.hpp>
#include <emof/Type.hpp>

using namespace emof;

Package::Package() : 
	m_nestedPackage(),
    m_ownedType(),
    m_uri()
{
}

Package::~Package()
{
}

Package::nestedPackage_t Package::getNestedPackage() const
{
	return e4c::returned(m_nestedPackage);
}

Package::ownedType_t Package::getOwnedType() const
{
	return e4c::returned(m_ownedType);
}

void Package::setUri(uri_t _uri)
{
	m_uri = _uri;;
}

Package::uri_t Package::getUri() const
{
	return m_uri;
}



