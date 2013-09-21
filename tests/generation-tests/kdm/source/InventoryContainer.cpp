
#include "InventoryContainer.hpp"
#include <kdm/source/AbstractInventoryElement.hpp>

using namespace kdm::source;

InventoryContainer::InventoryContainer() : 
	m_inventoryElement()
{
}

InventoryContainer::~InventoryContainer()
{
}

InventoryContainer::inventoryElement_t InventoryContainer::getInventoryElement() const
{
	return e4c::returned(m_inventoryElement);
}



