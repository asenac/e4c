
#include "AbstractStatementWithBody.hpp"
#include <xpand3/statement/AbstractStatement.hpp>

using namespace xpand3::statement;

AbstractStatementWithBody::AbstractStatementWithBody() : 
	m_body()
{
}

AbstractStatementWithBody::~AbstractStatementWithBody()
{
}

AbstractStatementWithBody::body_t AbstractStatementWithBody::getBody() const
{
	return e4c::returned(m_body);
}



