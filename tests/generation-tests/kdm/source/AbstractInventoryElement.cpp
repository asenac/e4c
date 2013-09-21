
#include "AbstractInventoryElement.hpp"
#include <kdm/source/AbstractInventoryRelationship.hpp>

using namespace kdm::source;

AbstractInventoryElement::AbstractInventoryElement() : 
	m_inventoryRelation()
{
}

AbstractInventoryElement::~AbstractInventoryElement()
{
}

AbstractInventoryElement::inventoryRelation_t AbstractInventoryElement::getInventoryRelation() const
{
	return e4c::returned(m_inventoryRelation);
}



