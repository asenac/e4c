
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

ArrayDef::name_t ArrayDef::getName() const
{
	return m_name;
}

ArrayDef::bounds_t ArrayDef::getBounds() const
{
	return e4c::returned(m_bounds);
}

void ArrayDef::addBounds(idlmm::Expression_ptr bounds_)
{
	m_bounds.push_back(std::unique_ptr < idlmm::Expression >(bounds_));
}




