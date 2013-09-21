
#include "ListLiteral.hpp"
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::expression;

ListLiteral::ListLiteral() : 
	m_elements()
{
}

ListLiteral::~ListLiteral()
{
}

ListLiteral::elements_t ListLiteral::getElements() const
{
	return e4c::returned(m_elements);
}



