
#include "AbstractEventElement.hpp"
#include <kdm/event/EventPackage.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/event/AbstractEventRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::AbstractEventElement include) START*/
/*PROTECTED REGION END*/

AbstractEventElement::AbstractEventElement() : 
	m_source(),
    m_eventRelation(),
    m_abstraction(),
    m_implementation()
{
	/*PROTECTED REGION ID(AbstractEventElement constructor) START*/
	/*PROTECTED REGION END*/
}

AbstractEventElement::~AbstractEventElement()
{
	/*PROTECTED REGION ID(AbstractEventElement destructor) START*/
	/*PROTECTED REGION END*/
}

AbstractEventElement::source_t AbstractEventElement::getSource() const
{
	return e4c::returned(m_source);
}


void AbstractEventElement::addSource(kdm::source::SourceRef_ptr source_)
{
	m_source.insert(std::unique_ptr < kdm::source::SourceRef >(source_));
}

void AbstractEventElement::addAllSource(const source_t& source_)
{
	for (auto i = source_.begin(); i != source_.end(); i++)
		addSource(*i);
}

AbstractEventElement::eventRelation_t AbstractEventElement::getEventRelation() const
{
	return e4c::returned(m_eventRelation);
}


void AbstractEventElement::addEventRelation(kdm::event::AbstractEventRelationship_ptr eventRelation_)
{
	m_eventRelation.insert(std::unique_ptr < kdm::event::AbstractEventRelationship >(eventRelation_));
}

void AbstractEventElement::addAllEventRelation(const eventRelation_t& eventRelation_)
{
	for (auto i = eventRelation_.begin(); i != eventRelation_.end(); i++)
		addEventRelation(*i);
}

AbstractEventElement::abstraction_t AbstractEventElement::getAbstraction() const
{
	return e4c::returned(m_abstraction);
}


void AbstractEventElement::addAbstraction(kdm::action::ActionElement_ptr abstraction_)
{
	m_abstraction.push_back(std::unique_ptr < kdm::action::ActionElement >(abstraction_));
}

void AbstractEventElement::addAllAbstraction(const abstraction_t& abstraction_)
{
	for (auto i = abstraction_.begin(); i != abstraction_.end(); i++)
		addAbstraction(*i);
}

AbstractEventElement::implementation_t AbstractEventElement::getImplementation() const
{
	return e4c::returned(m_implementation);
}

void AbstractEventElement::addImplementation(kdm::code::AbstractCodeElement_ptr implementation_)
{
	if (e4c::contains(m_implementation, implementation_))
		return;
	m_implementation.insert(implementation_);
}

void AbstractEventElement::addAllImplementation(const implementation_t& implementation_)
{
	for (auto i = implementation_.begin(); i != implementation_.end(); i++)
		addImplementation(*i);
}



/*PROTECTED REGION ID(kdm::event::AbstractEventElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractEventElement::eClassImpl() const
{
	return EventPackage::_instance()->getAbstractEventElement();
}
 
