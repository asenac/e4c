
#include "Keyword.hpp"

using namespace xtext;

Keyword::Keyword() : 
	m_value()
{
}

Keyword::~Keyword()
{
}

void Keyword::setValue(value_t _value)
{
	m_value = _value;;
}

Keyword::value_t Keyword::getValue() const
{
	return m_value;
}



