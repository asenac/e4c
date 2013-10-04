
#include "CompositeType.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/ItemUnit.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::CompositeType include) START*/
/*PROTECTED REGION END*/

CompositeType::CompositeType() : 
	m_itemUnit()
{
	/*PROTECTED REGION ID(CompositeType constructor) START*/
	/*PROTECTED REGION END*/
}

CompositeType::~CompositeType()
{
	/*PROTECTED REGION ID(CompositeType destructor) START*/
	/*PROTECTED REGION END*/
}

CompositeType::itemUnit_t CompositeType::getItemUnit() const
{
	return e4c::returned(m_itemUnit);
}


void CompositeType::addItemUnit(kdm::code::ItemUnit_ptr itemUnit_)
{
	m_itemUnit.push_back(std::unique_ptr < kdm::code::ItemUnit >(itemUnit_));
}

void CompositeType::addAllItemUnit(const itemUnit_t& itemUnit_)
{
	for (auto i = itemUnit_.begin(); i != itemUnit_.end(); i++)
		addItemUnit(*i);
}



/*PROTECTED REGION ID(kdm::code::CompositeType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CompositeType::eClassImpl() const
{
	return CodePackage::_instance()->getCompositeType();
}
 
