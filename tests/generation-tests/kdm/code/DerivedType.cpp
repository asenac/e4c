
#include "DerivedType.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/ItemUnit.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::DerivedType include) START*/
/*PROTECTED REGION END*/

DerivedType::DerivedType() : 
	m_itemUnit()
{
	/*PROTECTED REGION ID(DerivedType constructor) START*/
	/*PROTECTED REGION END*/
}

DerivedType::~DerivedType()
{
	/*PROTECTED REGION ID(DerivedType destructor) START*/
	/*PROTECTED REGION END*/
}

DerivedType::itemUnit_t DerivedType::getItemUnit() const
{
	return e4c::returned(m_itemUnit);
}


void DerivedType::setItemUnit(itemUnit_t itemUnit_)
{
	m_itemUnit.reset(itemUnit_);
}

DerivedType::itemUnit_t DerivedType::releaseItemUnit()
{
	return m_itemUnit.release();
}



/*PROTECTED REGION ID(kdm::code::DerivedType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DerivedType::eClassImpl() const
{
	return CodePackage::_instance()->getDerivedType();
}
 
