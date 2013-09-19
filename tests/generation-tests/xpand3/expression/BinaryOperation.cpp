
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



