
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

Extension::cached_t Extension::getCached() const
{
	return m_cached;
}

Extension::body_t Extension::getBody() const
{
	return e4c::returned(m_body);
}

Extension::returnType_t Extension::getReturnType() const
{
	return e4c::returned(m_returnType);
}



