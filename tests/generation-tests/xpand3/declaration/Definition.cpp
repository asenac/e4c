
#include "Definition.hpp"
#include <xpand3/statement/AbstractStatement.hpp>

using namespace xpand3::declaration;

Definition::Definition() : 
	m_body()
{
}

Definition::~Definition()
{
}

Definition::body_t Definition::getBody() const
{
	return e4c::returned(m_body);
}



