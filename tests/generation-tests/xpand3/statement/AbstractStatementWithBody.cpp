
#include "AbstractStatementWithBody.hpp"
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/statement/AbstractStatement.hpp>

using namespace xpand3::statement;

/*PROTECTED REGION ID(xpand3::statement::AbstractStatementWithBody include) START*/
/*PROTECTED REGION END*/

AbstractStatementWithBody::AbstractStatementWithBody() :
    m_body()
{
    /*PROTECTED REGION ID(AbstractStatementWithBody constructor) START*/
    /*PROTECTED REGION END*/
}

AbstractStatementWithBody::~AbstractStatementWithBody()
{
    /*PROTECTED REGION ID(AbstractStatementWithBody destructor) START*/
    /*PROTECTED REGION END*/
}

AbstractStatementWithBody::body_t AbstractStatementWithBody::getBody() const
{
    return e4c::returned(m_body);
}


void AbstractStatementWithBody::addBody(xpand3::statement::AbstractStatement_ptr body_)
{
    m_body.push_back(std::unique_ptr < xpand3::statement::AbstractStatement >(body_));
}

void AbstractStatementWithBody::addAllBody(const body_t& body_)
{
    for (auto i = body_.begin(); i != body_.end(); i++)
        addBody(*i);
}



/*PROTECTED REGION ID(xpand3::statement::AbstractStatementWithBody implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractStatementWithBody::eClassImpl() const
{
    return StatementPackage::_instance()->getAbstractStatementWithBody();
}

