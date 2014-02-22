#include "UnaryExpression.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Expression.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::UnaryExpression include) START*/
/*PROTECTED REGION END*/

UnaryExpression::UnaryExpression() :
    m_expression(),
    m_operator()
{
    /*PROTECTED REGION ID(UnaryExpression constructor) START*/
    /*PROTECTED REGION END*/
}

UnaryExpression::~UnaryExpression()
{
    /*PROTECTED REGION ID(UnaryExpression destructor) START*/
    /*PROTECTED REGION END*/
}

UnaryExpression::expression_t UnaryExpression::getExpression() const
{
    return e4c::returned(m_expression);
}

void UnaryExpression::setExpression(expression_t expression_)
{
    m_expression.reset(expression_);
}

UnaryExpression::expression_t UnaryExpression::releaseExpression()
{
    return m_expression.release();
}

void UnaryExpression::setOperator(operator_t _operator)
{
    m_operator = _operator;;
}

UnaryExpression::operator_t UnaryExpression::getOperator() const
{
    return m_operator;
}



/*PROTECTED REGION ID(idlmm::UnaryExpression implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UnaryExpression::eClassImpl() const
{
    return IdlmmPackage::_instance()->getUnaryExpression();
}

