
#include "LetExpression.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::LetExpression include) START*/
/*PROTECTED REGION END*/

LetExpression::LetExpression() :
    m_varExpression(),
    m_targetExpression(),
    m_varName()
{
    /*PROTECTED REGION ID(LetExpression constructor) START*/
    /*PROTECTED REGION END*/
}

LetExpression::~LetExpression()
{
    /*PROTECTED REGION ID(LetExpression destructor) START*/
    /*PROTECTED REGION END*/
}

LetExpression::varExpression_t LetExpression::getVarExpression() const
{
    return e4c::returned(m_varExpression);
}


void LetExpression::setVarExpression(varExpression_t varExpression_)
{
    m_varExpression.reset(varExpression_);
}

LetExpression::varExpression_t LetExpression::releaseVarExpression()
{
    return m_varExpression.release();
}

LetExpression::targetExpression_t LetExpression::getTargetExpression() const
{
    return e4c::returned(m_targetExpression);
}


void LetExpression::setTargetExpression(targetExpression_t targetExpression_)
{
    m_targetExpression.reset(targetExpression_);
}

LetExpression::targetExpression_t LetExpression::releaseTargetExpression()
{
    return m_targetExpression.release();
}

LetExpression::varName_t LetExpression::getVarName() const
{
    return e4c::returned(m_varName);
}


void LetExpression::setVarName(varName_t varName_)
{
    m_varName.reset(varName_);
}

LetExpression::varName_t LetExpression::releaseVarName()
{
    return m_varName.release();
}



/*PROTECTED REGION ID(xpand3::expression::LetExpression implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr LetExpression::eClassImpl() const
{
    return ExpressionPackage::_instance()->getLetExpression();
}

