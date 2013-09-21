
#include "UnaryOperation.hpp"
#include <xpand3/Identifier.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::expression;

UnaryOperation::UnaryOperation() : 
	m_operator(),
    m_operand()
{
}

UnaryOperation::~UnaryOperation()
{
}

UnaryOperation::operator_t UnaryOperation::getOperator() const
{
	return e4c::returned(m_operator);
}

UnaryOperation::operand_t UnaryOperation::getOperand() const
{
	return e4c::returned(m_operand);
}



