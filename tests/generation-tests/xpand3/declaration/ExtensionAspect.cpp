
#include "ExtensionAspect.hpp"
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::declaration;

ExtensionAspect::ExtensionAspect() : 
	m_expression()
{
}

ExtensionAspect::~ExtensionAspect()
{
}

ExtensionAspect::expression_t ExtensionAspect::getExpression() const
{
	return e4c::returned(m_expression);
}



