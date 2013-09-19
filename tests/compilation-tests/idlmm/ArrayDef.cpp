
#include "ArrayDef.hpp"
#include <idlmm/Expression.hpp>

using namespace idlmm;

ArrayDef::ArrayDef() : 
	m_name(),
    m_bounds()
{
}

ArrayDef::~ArrayDef()
{
}

void ArrayDef::setName(name_t _name)
{
	m_name = _name;;
}

name_t ArrayDef::getName() const
{
	return m_name;
}



