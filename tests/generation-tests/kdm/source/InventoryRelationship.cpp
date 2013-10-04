
#include "InventoryRelationship.hpp"
#include <kdm/source/SourcePackage.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/source/AbstractInventoryElement.hpp>

using namespace kdm::source;

/*PROTECTED REGION ID(kdm::source::InventoryRelationship include) START*/
/*PROTECTED REGION END*/

InventoryRelationship::InventoryRelationship() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(InventoryRelationship constructor) START*/
	/*PROTECTED REGION END*/
}

InventoryRelationship::~InventoryRelationship()
{
	/*PROTECTED REGION ID(InventoryRelationship destructor) START*/
	/*PROTECTED REGION END*/
}

InventoryRelationship::to_t InventoryRelationship::getTo() const
{
	return e4c::returned(m_to);
}

void InventoryRelationship::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

InventoryRelationship::from_t InventoryRelationship::getFrom() const
{
	return e4c::returned(m_from);
}

void InventoryRelationship::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::source::InventoryRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr InventoryRelationship::eClassImpl() const
{
	return SourcePackage::_instance()->getInventoryRelationship();
}
 
