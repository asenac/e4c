
#include "ErrorStatement.hpp"
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::statement;

/*PROTECTED REGION ID(xpand3::statement::ErrorStatement include) START*/
/*PROTECTED REGION END*/

ErrorStatement::ErrorStatement() :
    m_message()
{
    /*PROTECTED REGION ID(ErrorStatement constructor) START*/
    /*PROTECTED REGION END*/
}

ErrorStatement::~ErrorStatement()
{
    /*PROTECTED REGION ID(ErrorStatement destructor) START*/
    /*PROTECTED REGION END*/
}

ErrorStatement::message_t ErrorStatement::getMessage() const
{
    return e4c::returned(m_message);
}


void ErrorStatement::setMessage(message_t message_)
{
    m_message.reset(message_);
}

ErrorStatement::message_t ErrorStatement::releaseMessage()
{
    return m_message.release();
}



/*PROTECTED REGION ID(xpand3::statement::ErrorStatement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ErrorStatement::eClassImpl() const
{
    return StatementPackage::_instance()->getErrorStatement();
}

