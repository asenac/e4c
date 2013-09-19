
#include "Leaf.hpp"

using namespace CST;

Leaf::Leaf() : 
	m_value(),
    m_pos(),
    m_line()
{
}

Leaf::~Leaf()
{
}

void Leaf::setValue(value_t _value)
{
	m_value = _value;;
}

value_t Leaf::getValue() const
{
	return m_value;
}

void Leaf::setPos(pos_t _pos)
{
	m_pos = _pos;;
}

pos_t Leaf::getPos() const
{
	return m_pos;
}

void Leaf::setLine(line_t _line)
{
	m_line = _line;;
}

line_t Leaf::getLine() const
{
	return m_line;
}



