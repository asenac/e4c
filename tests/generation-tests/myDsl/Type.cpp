
#include "Type.hpp"

using namespace myDsl;

Type::Type() : 
	m_name()
{
}

Type::~Type()
{
}

void Type::setName(name_t _name)
{
	m_name = _name;;
}

name_t Type::getName() const
{
	return m_name;
}



