
#include "InventoryModel.hpp"
#include <kdm/source/SourcePackage.hpp>
#include <kdm/source/AbstractInventoryElement.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::InventoryModel include) START*/
/*PROTECTED REGION END*/

InventoryModel::InventoryModel() : 
	m_inventoryElement()
{
	/*PROTECTED REGION ID(InventoryModel constructor) START*/
	/*PROTECTED REGION END*/
}

InventoryModel::~InventoryModel()
{
	/*PROTECTED REGION ID(InventoryModel destructor) START*/
	/*PROTECTED REGION END*/
}

InventoryModel::inventoryElement_t InventoryModel::getInventoryElement() const
{
	return e4c::returned(m_inventoryElement);
}


void InventoryModel::addInventoryElement(kdm::source::AbstractInventoryElement_ptr inventoryElement_)
{
	m_inventoryElement.insert(std::unique_ptr < kdm::source::AbstractInventoryElement >(inventoryElement_));
}

void InventoryModel::addAllInventoryElement(const inventoryElement_t& inventoryElement_)
{
	for (auto i = inventoryElement_.begin(); i != inventoryElement_.end(); i++)
		addInventoryElement(*i);
}



/*PROTECTED REGION ID(kdm::source::InventoryModel implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr InventoryModel::eClassImpl() const
{
	return SourcePackage::_instance()->getInventoryModel();
}
 
