
#include "BinaryOperation.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::BinaryOperation include) START*/
/*PROTECTED REGION END*/

BinaryOperation::BinaryOperation() :
    m_left(),
    m_right(),
    m_operator()
{
    /*PROTECTED REGION ID(BinaryOperation constructor) START*/
    /*PROTECTED REGION END*/
}

BinaryOperation::~BinaryOperation()
{
    /*PROTECTED REGION ID(BinaryOperation destructor) START*/
    /*PROTECTED REGION END*/
}

BinaryOperation::left_t BinaryOperation::getLeft() const
{
    return e4c::returned(m_left);
}


void BinaryOperation::setLeft(left_t left_)
{
    m_left.reset(left_);
}

BinaryOperation::left_t BinaryOperation::releaseLeft()
{
    return m_left.release();
}

BinaryOperation::right_t BinaryOperation::getRight() const
{
    return e4c::returned(m_right);
}


void BinaryOperation::setRight(right_t right_)
{
    m_right.reset(right_);
}

BinaryOperation::right_t BinaryOperation::releaseRight()
{
    return m_right.release();
}

BinaryOperation::operator_t BinaryOperation::getOperator() const
{
    return e4c::returned(m_operator);
}


void BinaryOperation::setOperator(operator_t operator_)
{
    m_operator.reset(operator_);
}

BinaryOperation::operator_t BinaryOperation::releaseOperator()
{
    return m_operator.release();
}



/*PROTECTED REGION ID(xpand3::expression::BinaryOperation implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr BinaryOperation::eClassImpl() const
{
    return ExpressionPackage::_instance()->getBinaryOperation();
}

