
#include "BinaryOperation.hpp"
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::expression;

BinaryOperation::BinaryOperation() : 
	m_left(),
    m_right(),
    m_operator()
{
}

BinaryOperation::~BinaryOperation()
{
}

BinaryOperation::left_t BinaryOperation::getLeft() const
{
	return e4c::returned(m_left);
}

BinaryOperation::right_t BinaryOperation::getRight() const
{
	return e4c::returned(m_right);
}

BinaryOperation::operator_t BinaryOperation::getOperator() const
{
	return e4c::returned(m_operator);
}



