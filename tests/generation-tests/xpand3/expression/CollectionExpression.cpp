
#include "CollectionExpression.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::expression;

CollectionExpression::CollectionExpression() : 
	m_closure(),
    m_eleName()
{
}

CollectionExpression::~CollectionExpression()
{
}

CollectionExpression::closure_t CollectionExpression::getClosure() const
{
	return e4c::returned(m_closure);
}

CollectionExpression::eleName_t CollectionExpression::getEleName() const
{
	return e4c::returned(m_eleName);
}



