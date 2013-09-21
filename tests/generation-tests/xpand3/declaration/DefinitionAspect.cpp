
#include "DefinitionAspect.hpp"
#include <xpand3/statement/AbstractStatement.hpp>

using namespace xpand3::declaration;

DefinitionAspect::DefinitionAspect() : 
	m_body()
{
}

DefinitionAspect::~DefinitionAspect()
{
}

DefinitionAspect::body_t DefinitionAspect::getBody() const
{
	return e4c::returned(m_body);
}



