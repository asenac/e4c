#include "BinaryExpression.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Expression.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::BinaryExpression include) START*/
/*PROTECTED REGION END*/

BinaryExpression::BinaryExpression() :
    m_left(),
    m_right(),
    m_operator()
{
    /*PROTECTED REGION ID(BinaryExpression constructor) START*/
    /*PROTECTED REGION END*/
}

BinaryExpression::~BinaryExpression()
{
    /*PROTECTED REGION ID(BinaryExpression destructor) START*/
    /*PROTECTED REGION END*/
}

BinaryExpression::left_t BinaryExpression::getLeft() const
{
    return e4c::returned(m_left);
}

void BinaryExpression::setLeft(left_t left_)
{
    m_left.reset(left_);
}

BinaryExpression::left_t BinaryExpression::releaseLeft()
{
    return m_left.release();
}

BinaryExpression::right_t BinaryExpression::getRight() const
{
    return e4c::returned(m_right);
}

void BinaryExpression::setRight(right_t right_)
{
    m_right.reset(right_);
}

BinaryExpression::right_t BinaryExpression::releaseRight()
{
    return m_right.release();
}

void BinaryExpression::setOperator(operator_t _operator)
{
    m_operator = _operator;;
}

BinaryExpression::operator_t BinaryExpression::getOperator() const
{
    return m_operator;
}



/*PROTECTED REGION ID(idlmm::BinaryExpression implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr BinaryExpression::eClassImpl() const
{
    return IdlmmPackage::_instance()->getBinaryExpression();
}

