
#include "Cast.hpp"
#include <xpand3/Identifier.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::expression;

Cast::Cast() : 
	m_type(),
    m_target()
{
}

Cast::~Cast()
{
}

Cast::type_t Cast::getType() const
{
	return e4c::returned(m_type);
}

Cast::target_t Cast::getTarget() const
{
	return e4c::returned(m_target);
}



