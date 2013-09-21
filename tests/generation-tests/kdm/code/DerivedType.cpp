
#include "DerivedType.hpp"
#include <kdm/code/ItemUnit.hpp>

using namespace kdm::code;

DerivedType::DerivedType() : 
	m_itemUnit()
{
}

DerivedType::~DerivedType()
{
}

DerivedType::itemUnit_t DerivedType::getItemUnit() const
{
	return e4c::returned(m_itemUnit);
}



