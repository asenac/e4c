
#include "ConceptualRelationship.hpp"
#include <kdm/conceptual/ConceptualPackage.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/conceptual/AbstractConceptualElement.hpp>

using namespace kdm::conceptual;

/*PROTECTED REGION ID(kdm::conceptual::ConceptualRelationship include) START*/
/*PROTECTED REGION END*/

ConceptualRelationship::ConceptualRelationship() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(ConceptualRelationship constructor) START*/
	/*PROTECTED REGION END*/
}

ConceptualRelationship::~ConceptualRelationship()
{
	/*PROTECTED REGION ID(ConceptualRelationship destructor) START*/
	/*PROTECTED REGION END*/
}

ConceptualRelationship::to_t ConceptualRelationship::getTo() const
{
	return e4c::returned(m_to);
}

void ConceptualRelationship::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

ConceptualRelationship::from_t ConceptualRelationship::getFrom() const
{
	return e4c::returned(m_from);
}

void ConceptualRelationship::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::conceptual::ConceptualRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ConceptualRelationship::eClassImpl() const
{
	return ConceptualPackage::_instance()->getConceptualRelationship();
}
 
