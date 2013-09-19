
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

void Package::setUri(uri_t _uri)
{
	m_uri = _uri;;
}

uri_t Package::getUri() const
{
	return m_uri;
}



