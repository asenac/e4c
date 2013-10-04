
#include "ColumnSet.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/code/ItemUnit.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::ColumnSet include) START*/
/*PROTECTED REGION END*/

ColumnSet::ColumnSet() : 
	m_itemUnit()
{
	/*PROTECTED REGION ID(ColumnSet constructor) START*/
	/*PROTECTED REGION END*/
}

ColumnSet::~ColumnSet()
{
	/*PROTECTED REGION ID(ColumnSet destructor) START*/
	/*PROTECTED REGION END*/
}

ColumnSet::itemUnit_t ColumnSet::getItemUnit() const
{
	return e4c::returned(m_itemUnit);
}


void ColumnSet::addItemUnit(kdm::code::ItemUnit_ptr itemUnit_)
{
	m_itemUnit.push_back(std::unique_ptr < kdm::code::ItemUnit >(itemUnit_));
}

void ColumnSet::addAllItemUnit(const itemUnit_t& itemUnit_)
{
	for (auto i = itemUnit_.begin(); i != itemUnit_.end(); i++)
		addItemUnit(*i);
}



/*PROTECTED REGION ID(kdm::data::ColumnSet implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ColumnSet::eClassImpl() const
{
	return DataPackage::_instance()->getColumnSet();
}
 
