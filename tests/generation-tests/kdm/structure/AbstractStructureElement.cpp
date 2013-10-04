
#include "AbstractStructureElement.hpp"
#include <kdm/structure/StructurePackage.hpp>
#include <kdm/core/AggregatedRelationship.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>
#include <kdm/structure/AbstractStructureRelationship.hpp>

using namespace kdm::structure;

/*PROTECTED REGION ID(kdm::structure::AbstractStructureElement include) START*/
/*PROTECTED REGION END*/

AbstractStructureElement::AbstractStructureElement() : 
	m_aggregated(),
    m_implementation(),
    m_structureElement(),
    m_structureRelationship()
{
	/*PROTECTED REGION ID(AbstractStructureElement constructor) START*/
	/*PROTECTED REGION END*/
}

AbstractStructureElement::~AbstractStructureElement()
{
	/*PROTECTED REGION ID(AbstractStructureElement destructor) START*/
	/*PROTECTED REGION END*/
}

AbstractStructureElement::aggregated_t AbstractStructureElement::getAggregated() const
{
	return e4c::returned(m_aggregated);
}


void AbstractStructureElement::addAggregated(kdm::core::AggregatedRelationship_ptr aggregated_)
{
	m_aggregated.insert(std::unique_ptr < kdm::core::AggregatedRelationship >(aggregated_));
}

void AbstractStructureElement::addAllAggregated(const aggregated_t& aggregated_)
{
	for (auto i = aggregated_.begin(); i != aggregated_.end(); i++)
		addAggregated(*i);
}

AbstractStructureElement::implementation_t AbstractStructureElement::getImplementation() const
{
	return e4c::returned(m_implementation);
}

void AbstractStructureElement::addImplementation(kdm::core::KDMEntity_ptr implementation_)
{
	if (e4c::contains(m_implementation, implementation_))
		return;
	m_implementation.insert(implementation_);
}

void AbstractStructureElement::addAllImplementation(const implementation_t& implementation_)
{
	for (auto i = implementation_.begin(); i != implementation_.end(); i++)
		addImplementation(*i);
}

AbstractStructureElement::structureElement_t AbstractStructureElement::getStructureElement() const
{
	return e4c::returned(m_structureElement);
}


void AbstractStructureElement::addStructureElement(kdm::structure::AbstractStructureElement_ptr structureElement_)
{
	m_structureElement.insert(std::unique_ptr < kdm::structure::AbstractStructureElement >(structureElement_));
}

void AbstractStructureElement::addAllStructureElement(const structureElement_t& structureElement_)
{
	for (auto i = structureElement_.begin(); i != structureElement_.end(); i++)
		addStructureElement(*i);
}

AbstractStructureElement::structureRelationship_t AbstractStructureElement::getStructureRelationship() const
{
	return e4c::returned(m_structureRelationship);
}


void AbstractStructureElement::addStructureRelationship(kdm::structure::AbstractStructureRelationship_ptr structureRelationship_)
{
	m_structureRelationship.insert(std::unique_ptr < kdm::structure::AbstractStructureRelationship >(structureRelationship_));
}

void AbstractStructureElement::addAllStructureRelationship(const structureRelationship_t& structureRelationship_)
{
	for (auto i = structureRelationship_.begin(); i != structureRelationship_.end(); i++)
		addStructureRelationship(*i);
}



/*PROTECTED REGION ID(kdm::structure::AbstractStructureElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractStructureElement::eClassImpl() const
{
	return StructurePackage::_instance()->getAbstractStructureElement();
}
 
