
#include "AbstractInventoryElement.hpp"
#include <kdm/source/SourcePackage.hpp>
#include <kdm/source/AbstractInventoryRelationship.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::AbstractInventoryElement include) START*/
/*PROTECTED REGION END*/

AbstractInventoryElement::AbstractInventoryElement() : 
	m_inventoryRelation()
{
	/*PROTECTED REGION ID(AbstractInventoryElement constructor) START*/
	/*PROTECTED REGION END*/
}

AbstractInventoryElement::~AbstractInventoryElement()
{
	/*PROTECTED REGION ID(AbstractInventoryElement destructor) START*/
	/*PROTECTED REGION END*/
}

AbstractInventoryElement::inventoryRelation_t AbstractInventoryElement::getInventoryRelation() const
{
	return e4c::returned(m_inventoryRelation);
}


void AbstractInventoryElement::addInventoryRelation(kdm::source::AbstractInventoryRelationship_ptr inventoryRelation_)
{
	m_inventoryRelation.insert(std::unique_ptr < kdm::source::AbstractInventoryRelationship >(inventoryRelation_));
}

void AbstractInventoryElement::addAllInventoryRelation(const inventoryRelation_t& inventoryRelation_)
{
	for (auto i = inventoryRelation_.begin(); i != inventoryRelation_.end(); i++)
		addInventoryRelation(*i);
}



/*PROTECTED REGION ID(kdm::source::AbstractInventoryElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractInventoryElement::eClassImpl() const
{
	return SourcePackage::_instance()->getAbstractInventoryElement();
}
 
