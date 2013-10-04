
#include "AbstractUIElement.hpp"
#include <kdm/ui/UiPackage.hpp>
#include <kdm/source/SourceRef.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::AbstractUIElement include) START*/
/*PROTECTED REGION END*/

AbstractUIElement::AbstractUIElement() : 
	m_source(),
    m_UIRelation(),
    m_implementation(),
    m_abstraction()
{
	/*PROTECTED REGION ID(AbstractUIElement constructor) START*/
	/*PROTECTED REGION END*/
}

AbstractUIElement::~AbstractUIElement()
{
	/*PROTECTED REGION ID(AbstractUIElement destructor) START*/
	/*PROTECTED REGION END*/
}

AbstractUIElement::source_t AbstractUIElement::getSource() const
{
	return e4c::returned(m_source);
}


void AbstractUIElement::addSource(kdm::source::SourceRef_ptr source_)
{
	m_source.insert(std::unique_ptr < kdm::source::SourceRef >(source_));
}

void AbstractUIElement::addAllSource(const source_t& source_)
{
	for (auto i = source_.begin(); i != source_.end(); i++)
		addSource(*i);
}

AbstractUIElement::UIRelation_t AbstractUIElement::getUIRelation() const
{
	return e4c::returned(m_UIRelation);
}


void AbstractUIElement::addUIRelation(kdm::ui::AbstractUIRelationship_ptr UIRelation_)
{
	m_UIRelation.insert(std::unique_ptr < kdm::ui::AbstractUIRelationship >(UIRelation_));
}

void AbstractUIElement::addAllUIRelation(const UIRelation_t& UIRelation_)
{
	for (auto i = UIRelation_.begin(); i != UIRelation_.end(); i++)
		addUIRelation(*i);
}

AbstractUIElement::implementation_t AbstractUIElement::getImplementation() const
{
	return e4c::returned(m_implementation);
}

void AbstractUIElement::addImplementation(kdm::code::AbstractCodeElement_ptr implementation_)
{
	if (e4c::contains(m_implementation, implementation_))
		return;
	m_implementation.insert(implementation_);
}

void AbstractUIElement::addAllImplementation(const implementation_t& implementation_)
{
	for (auto i = implementation_.begin(); i != implementation_.end(); i++)
		addImplementation(*i);
}

AbstractUIElement::abstraction_t AbstractUIElement::getAbstraction() const
{
	return e4c::returned(m_abstraction);
}


void AbstractUIElement::addAbstraction(kdm::action::ActionElement_ptr abstraction_)
{
	m_abstraction.push_back(std::unique_ptr < kdm::action::ActionElement >(abstraction_));
}

void AbstractUIElement::addAllAbstraction(const abstraction_t& abstraction_)
{
	for (auto i = abstraction_.begin(); i != abstraction_.end(); i++)
		addAbstraction(*i);
}



/*PROTECTED REGION ID(kdm::ui::AbstractUIElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractUIElement::eClassImpl() const
{
	return UiPackage::_instance()->getAbstractUIElement();
}
 
