
#include "LetExpression.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::expression;

LetExpression::LetExpression() : 
	m_varExpression(),
    m_targetExpression(),
    m_varName()
{
}

LetExpression::~LetExpression()
{
}

LetExpression::varExpression_t LetExpression::getVarExpression() const
{
	return e4c::returned(m_varExpression);
}

LetExpression::targetExpression_t LetExpression::getTargetExpression() const
{
	return e4c::returned(m_targetExpression);
}

LetExpression::varName_t LetExpression::getVarName() const
{
	return e4c::returned(m_varName);
}



