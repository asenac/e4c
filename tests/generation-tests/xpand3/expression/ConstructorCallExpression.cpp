
#include "ConstructorCallExpression.hpp"
#include <xpand3/Identifier.hpp>

using namespace xpand3::expression;

ConstructorCallExpression::ConstructorCallExpression() : 
	m_type()
{
}

ConstructorCallExpression::~ConstructorCallExpression()
{
}

ConstructorCallExpression::type_t ConstructorCallExpression::getType() const
{
	return e4c::returned(m_type);
}



