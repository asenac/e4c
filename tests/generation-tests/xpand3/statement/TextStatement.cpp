
#include "TextStatement.hpp"

using namespace xpand3::statement;

TextStatement::TextStatement() : 
	m_value(),
    m_deleteLine()
{
}

TextStatement::~TextStatement()
{
}

void TextStatement::setValue(value_t _value)
{
	m_value = _value;;
}

value_t TextStatement::getValue() const
{
	return m_value;
}

void TextStatement::setDeleteLine(deleteLine_t _deleteLine)
{
	m_deleteLine = _deleteLine;;
}

deleteLine_t TextStatement::getDeleteLine() const
{
	return m_deleteLine;
}



