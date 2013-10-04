
#include "AbstractPlatformElement.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::AbstractPlatformElement include) START*/
/*PROTECTED REGION END*/

AbstractPlatformElement::AbstractPlatformElement() : 
	m_source(),
    m_relation(),
    m_abstraction(),
    m_implementation()
{
	/*PROTECTED REGION ID(AbstractPlatformElement constructor) START*/
	/*PROTECTED REGION END*/
}

AbstractPlatformElement::~AbstractPlatformElement()
{
	/*PROTECTED REGION ID(AbstractPlatformElement destructor) START*/
	/*PROTECTED REGION END*/
}

AbstractPlatformElement::source_t AbstractPlatformElement::getSource() const
{
	return e4c::returned(m_source);
}


void AbstractPlatformElement::addSource(kdm::source::SourceRef_ptr source_)
{
	m_source.insert(std::unique_ptr < kdm::source::SourceRef >(source_));
}

void AbstractPlatformElement::addAllSource(const source_t& source_)
{
	for (auto i = source_.begin(); i != source_.end(); i++)
		addSource(*i);
}

AbstractPlatformElement::relation_t AbstractPlatformElement::getRelation() const
{
	return e4c::returned(m_relation);
}


void AbstractPlatformElement::addRelation(kdm::platform::AbstractPlatformRelationship_ptr relation_)
{
	m_relation.insert(std::unique_ptr < kdm::platform::AbstractPlatformRelationship >(relation_));
}

void AbstractPlatformElement::addAllRelation(const relation_t& relation_)
{
	for (auto i = relation_.begin(); i != relation_.end(); i++)
		addRelation(*i);
}

AbstractPlatformElement::abstraction_t AbstractPlatformElement::getAbstraction() const
{
	return e4c::returned(m_abstraction);
}


void AbstractPlatformElement::addAbstraction(kdm::action::ActionElement_ptr abstraction_)
{
	m_abstraction.push_back(std::unique_ptr < kdm::action::ActionElement >(abstraction_));
}

void AbstractPlatformElement::addAllAbstraction(const abstraction_t& abstraction_)
{
	for (auto i = abstraction_.begin(); i != abstraction_.end(); i++)
		addAbstraction(*i);
}

AbstractPlatformElement::implementation_t AbstractPlatformElement::getImplementation() const
{
	return e4c::returned(m_implementation);
}

void AbstractPlatformElement::addImplementation(kdm::code::AbstractCodeElement_ptr implementation_)
{
	if (e4c::contains(m_implementation, implementation_))
		return;
	m_implementation.insert(implementation_);
}

void AbstractPlatformElement::addAllImplementation(const implementation_t& implementation_)
{
	for (auto i = implementation_.begin(); i != implementation_.end(); i++)
		addImplementation(*i);
}



/*PROTECTED REGION ID(kdm::platform::AbstractPlatformElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractPlatformElement::eClassImpl() const
{
	return PlatformPackage::_instance()->getAbstractPlatformElement();
}
 
