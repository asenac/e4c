
#include "Extension.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::declaration;

Extension::Extension() : 
	m_cached(),
    m_body(),
    m_returnType()
{
}

Extension::~Extension()
{
}

void Extension::setCached(cached_t _cached)
{
	m_cached = _cached;;
}

cached_t Extension::getCached() const
{
	return m_cached;
}



