
#include "ControlElement.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/Datatype.hpp>
#include <kdm/action/EntryFlow.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::ControlElement include) START*/
/*PROTECTED REGION END*/

ControlElement::ControlElement() : 
	m_type(),
    m_entryFlow(),
    m_codeElement()
{
	/*PROTECTED REGION ID(ControlElement constructor) START*/
	/*PROTECTED REGION END*/
}

ControlElement::~ControlElement()
{
	/*PROTECTED REGION ID(ControlElement destructor) START*/
	/*PROTECTED REGION END*/
}

ControlElement::type_t ControlElement::getType() const
{
	return e4c::returned(m_type);
}

void ControlElement::setType(type_t type_)
{
	if (m_type == type_)
		return;
	m_type = type_;
}

ControlElement::entryFlow_t ControlElement::getEntryFlow() const
{
	return e4c::returned(m_entryFlow);
}


void ControlElement::addEntryFlow(kdm::action::EntryFlow_ptr entryFlow_)
{
	m_entryFlow.insert(std::unique_ptr < kdm::action::EntryFlow >(entryFlow_));
}

void ControlElement::addAllEntryFlow(const entryFlow_t& entryFlow_)
{
	for (auto i = entryFlow_.begin(); i != entryFlow_.end(); i++)
		addEntryFlow(*i);
}

ControlElement::codeElement_t ControlElement::getCodeElement() const
{
	return e4c::returned(m_codeElement);
}


void ControlElement::addCodeElement(kdm::code::AbstractCodeElement_ptr codeElement_)
{
	m_codeElement.push_back(std::unique_ptr < kdm::code::AbstractCodeElement >(codeElement_));
}

void ControlElement::addAllCodeElement(const codeElement_t& codeElement_)
{
	for (auto i = codeElement_.begin(); i != codeElement_.end(); i++)
		addCodeElement(*i);
}



/*PROTECTED REGION ID(kdm::code::ControlElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ControlElement::eClassImpl() const
{
	return CodePackage::_instance()->getControlElement();
}
 
