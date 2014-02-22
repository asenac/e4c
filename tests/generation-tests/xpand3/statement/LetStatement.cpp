
#include "LetStatement.hpp"
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/Identifier.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::statement;

/*PROTECTED REGION ID(xpand3::statement::LetStatement include) START*/
/*PROTECTED REGION END*/

LetStatement::LetStatement() :
    m_varName(),
    m_varValue()
{
    /*PROTECTED REGION ID(LetStatement constructor) START*/
    /*PROTECTED REGION END*/
}

LetStatement::~LetStatement()
{
    /*PROTECTED REGION ID(LetStatement destructor) START*/
    /*PROTECTED REGION END*/
}

LetStatement::varName_t LetStatement::getVarName() const
{
    return e4c::returned(m_varName);
}


void LetStatement::setVarName(varName_t varName_)
{
    m_varName.reset(varName_);
}

LetStatement::varName_t LetStatement::releaseVarName()
{
    return m_varName.release();
}

LetStatement::varValue_t LetStatement::getVarValue() const
{
    return e4c::returned(m_varValue);
}


void LetStatement::setVarValue(varValue_t varValue_)
{
    m_varValue.reset(varValue_);
}

LetStatement::varValue_t LetStatement::releaseVarValue()
{
    return m_varValue.release();
}



/*PROTECTED REGION ID(xpand3::statement::LetStatement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr LetStatement::eClassImpl() const
{
    return StatementPackage::_instance()->getLetStatement();
}

