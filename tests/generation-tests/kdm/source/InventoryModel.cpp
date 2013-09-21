
#include "InventoryModel.hpp"
#include <kdm/source/AbstractInventoryElement.hpp>

using namespace kdm::source;

InventoryModel::InventoryModel() : 
	m_inventoryElement()
{
}

InventoryModel::~InventoryModel()
{
}

InventoryModel::inventoryElement_t InventoryModel::getInventoryElement() const
{
	return e4c::returned(m_inventoryElement);
}



