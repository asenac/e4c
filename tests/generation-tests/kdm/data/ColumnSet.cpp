
#include "ColumnSet.hpp"
#include <kdm/code/ItemUnit.hpp>

using namespace kdm::data;

ColumnSet::ColumnSet() : 
	m_itemUnit()
{
}

ColumnSet::~ColumnSet()
{
}

ColumnSet::itemUnit_t ColumnSet::getItemUnit() const
{
	return e4c::returned(m_itemUnit);
}



