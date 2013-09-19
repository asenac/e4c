
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



