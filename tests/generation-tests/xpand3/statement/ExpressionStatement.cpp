
#include "ExpressionStatement.hpp"
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::statement;

/*PROTECTED REGION ID(xpand3::statement::ExpressionStatement include) START*/
/*PROTECTED REGION END*/

ExpressionStatement::ExpressionStatement() :
    m_expression()
{
    /*PROTECTED REGION ID(ExpressionStatement constructor) START*/
    /*PROTECTED REGION END*/
}

ExpressionStatement::~ExpressionStatement()
{
    /*PROTECTED REGION ID(ExpressionStatement destructor) START*/
    /*PROTECTED REGION END*/
}

ExpressionStatement::expression_t ExpressionStatement::getExpression() const
{
    return e4c::returned(m_expression);
}


void ExpressionStatement::setExpression(expression_t expression_)
{
    m_expression.reset(expression_);
}

ExpressionStatement::expression_t ExpressionStatement::releaseExpression()
{
    return m_expression.release();
}



/*PROTECTED REGION ID(xpand3::statement::ExpressionStatement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ExpressionStatement::eClassImpl() const
{
    return StatementPackage::_instance()->getExpressionStatement();
}

