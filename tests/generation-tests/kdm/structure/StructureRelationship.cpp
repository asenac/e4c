
#include "StructureRelationship.hpp"
#include <kdm/structure/StructurePackage.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>

using namespace kdm::structure;

/*PROTECTED REGION ID(kdm::structure::StructureRelationship include) START*/
/*PROTECTED REGION END*/

StructureRelationship::StructureRelationship() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(StructureRelationship constructor) START*/
	/*PROTECTED REGION END*/
}

StructureRelationship::~StructureRelationship()
{
	/*PROTECTED REGION ID(StructureRelationship destructor) START*/
	/*PROTECTED REGION END*/
}

StructureRelationship::to_t StructureRelationship::getTo() const
{
	return e4c::returned(m_to);
}

void StructureRelationship::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

StructureRelationship::from_t StructureRelationship::getFrom() const
{
	return e4c::returned(m_from);
}

void StructureRelationship::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::structure::StructureRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr StructureRelationship::eClassImpl() const
{
	return StructurePackage::_instance()->getStructureRelationship();
}
 
