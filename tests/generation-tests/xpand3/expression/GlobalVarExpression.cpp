
#include "GlobalVarExpression.hpp"
#include <xpand3/expression/ExpressionPackage.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::expression;

/*PROTECTED REGION ID(xpand3::expression::GlobalVarExpression include) START*/
/*PROTECTED REGION END*/

GlobalVarExpression::GlobalVarExpression() :
    m_globalVarName()
{
    /*PROTECTED REGION ID(GlobalVarExpression constructor) START*/
    /*PROTECTED REGION END*/
}

GlobalVarExpression::~GlobalVarExpression()
{
    /*PROTECTED REGION ID(GlobalVarExpression destructor) START*/
    /*PROTECTED REGION END*/
}

GlobalVarExpression::globalVarName_t GlobalVarExpression::getGlobalVarName() const
{
    return e4c::returned(m_globalVarName);
}


void GlobalVarExpression::setGlobalVarName(globalVarName_t globalVarName_)
{
    m_globalVarName.reset(globalVarName_);
}

GlobalVarExpression::globalVarName_t GlobalVarExpression::releaseGlobalVarName()
{
    return m_globalVarName.release();
}



/*PROTECTED REGION ID(xpand3::expression::GlobalVarExpression implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr GlobalVarExpression::eClassImpl() const
{
    return ExpressionPackage::_instance()->getGlobalVarExpression();
}

