
#include "UnaryOperation.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/Identifier.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::UnaryOperation include) START*/
/*PROTECTED REGION END*/

UnaryOperation::UnaryOperation() : 
	m_operator(),
    m_operand()
{
	/*PROTECTED REGION ID(UnaryOperation constructor) START*/
	/*PROTECTED REGION END*/
}

UnaryOperation::~UnaryOperation()
{
	/*PROTECTED REGION ID(UnaryOperation destructor) START*/
	/*PROTECTED REGION END*/
}

UnaryOperation::operator_t UnaryOperation::getOperator() const
{
	return e4c::returned(m_operator);
}


void UnaryOperation::setOperator(operator_t operator_)
{
	m_operator.reset(operator_);
}

UnaryOperation::operator_t UnaryOperation::releaseOperator()
{
	return m_operator.release();
}

UnaryOperation::operand_t UnaryOperation::getOperand() const
{
	return e4c::returned(m_operand);
}

void UnaryOperation::setOperand(operand_t operand_)
{
	if (m_operand == operand_)
		return;
	m_operand = operand_;
}



/*PROTECTED REGION ID(xpand3::expression::UnaryOperation implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UnaryOperation::eClassImpl() const
{
	return ExpressionPackage::_instance()->getUnaryOperation();
}
 
