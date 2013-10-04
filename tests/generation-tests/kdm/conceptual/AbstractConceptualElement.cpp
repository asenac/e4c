
#include "AbstractConceptualElement.hpp"
#include <kdm/conceptual/ConceptualPackage.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/conceptual/AbstractConceptualRelationship.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::conceptual;

/*PROTECTED REGION ID(kdm::conceptual::AbstractConceptualElement include) START*/
/*PROTECTED REGION END*/

AbstractConceptualElement::AbstractConceptualElement() : 
	m_source(),
    m_implementation(),
    m_conceptualRelation(),
    m_abstraction()
{
	/*PROTECTED REGION ID(AbstractConceptualElement constructor) START*/
	/*PROTECTED REGION END*/
}

AbstractConceptualElement::~AbstractConceptualElement()
{
	/*PROTECTED REGION ID(AbstractConceptualElement destructor) START*/
	/*PROTECTED REGION END*/
}

AbstractConceptualElement::source_t AbstractConceptualElement::getSource() const
{
	return e4c::returned(m_source);
}


void AbstractConceptualElement::addSource(kdm::source::SourceRef_ptr source_)
{
	m_source.insert(std::unique_ptr < kdm::source::SourceRef >(source_));
}

void AbstractConceptualElement::addAllSource(const source_t& source_)
{
	for (auto i = source_.begin(); i != source_.end(); i++)
		addSource(*i);
}

AbstractConceptualElement::implementation_t AbstractConceptualElement::getImplementation() const
{
	return e4c::returned(m_implementation);
}

void AbstractConceptualElement::addImplementation(kdm::core::KDMEntity_ptr implementation_)
{
	if (e4c::contains(m_implementation, implementation_))
		return;
	m_implementation.insert(implementation_);
}

void AbstractConceptualElement::addAllImplementation(const implementation_t& implementation_)
{
	for (auto i = implementation_.begin(); i != implementation_.end(); i++)
		addImplementation(*i);
}

AbstractConceptualElement::conceptualRelation_t AbstractConceptualElement::getConceptualRelation() const
{
	return e4c::returned(m_conceptualRelation);
}


void AbstractConceptualElement::addConceptualRelation(kdm::conceptual::AbstractConceptualRelationship_ptr conceptualRelation_)
{
	m_conceptualRelation.insert(std::unique_ptr < kdm::conceptual::AbstractConceptualRelationship >(conceptualRelation_));
}

void AbstractConceptualElement::addAllConceptualRelation(const conceptualRelation_t& conceptualRelation_)
{
	for (auto i = conceptualRelation_.begin(); i != conceptualRelation_.end(); i++)
		addConceptualRelation(*i);
}

AbstractConceptualElement::abstraction_t AbstractConceptualElement::getAbstraction() const
{
	return e4c::returned(m_abstraction);
}


void AbstractConceptualElement::addAbstraction(kdm::action::ActionElement_ptr abstraction_)
{
	m_abstraction.insert(std::unique_ptr < kdm::action::ActionElement >(abstraction_));
}

void AbstractConceptualElement::addAllAbstraction(const abstraction_t& abstraction_)
{
	for (auto i = abstraction_.begin(); i != abstraction_.end(); i++)
		addAbstraction(*i);
}



/*PROTECTED REGION ID(kdm::conceptual::AbstractConceptualElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractConceptualElement::eClassImpl() const
{
	return ConceptualPackage::_instance()->getAbstractConceptualElement();
}
 
