
#include "ValueExpression.hpp"

using namespace idlmm;

ValueExpression::ValueExpression() : 
	m_value()
{
}

ValueExpression::~ValueExpression()
{
}

void ValueExpression::setValue(value_t _value)
{
	m_value = _value;;
}

ValueExpression::value_t ValueExpression::getValue() const
{
	return m_value;
}




