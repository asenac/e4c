
#include "CompositeType.hpp"
#include <kdm/code/ItemUnit.hpp>

using namespace kdm::code;

CompositeType::CompositeType() : 
	m_itemUnit()
{
}

CompositeType::~CompositeType()
{
}

CompositeType::itemUnit_t CompositeType::getItemUnit() const
{
	return e4c::returned(m_itemUnit);
}



