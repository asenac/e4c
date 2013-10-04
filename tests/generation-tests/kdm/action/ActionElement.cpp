
#include "ActionElement.hpp"
#include <kdm/action/ActionPackage.hpp>
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::ActionElement include) START*/
/*PROTECTED REGION END*/

ActionElement::ActionElement() : 
	m_kind(),
    m_codeElement(),
    m_actionRelation()
{
	/*PROTECTED REGION ID(ActionElement constructor) START*/
	/*PROTECTED REGION END*/
}

ActionElement::~ActionElement()
{
	/*PROTECTED REGION ID(ActionElement destructor) START*/
	/*PROTECTED REGION END*/
}

void ActionElement::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

ActionElement::kind_t ActionElement::getKind() const
{
	return m_kind;
}

ActionElement::codeElement_t ActionElement::getCodeElement() const
{
	return e4c::returned(m_codeElement);
}


void ActionElement::addCodeElement(kdm::code::AbstractCodeElement_ptr codeElement_)
{
	m_codeElement.insert(std::unique_ptr < kdm::code::AbstractCodeElement >(codeElement_));
}

void ActionElement::addAllCodeElement(const codeElement_t& codeElement_)
{
	for (auto i = codeElement_.begin(); i != codeElement_.end(); i++)
		addCodeElement(*i);
}

ActionElement::actionRelation_t ActionElement::getActionRelation() const
{
	return e4c::returned(m_actionRelation);
}


void ActionElement::addActionRelation(kdm::action::AbstractActionRelationship_ptr actionRelation_)
{
	m_actionRelation.push_back(std::unique_ptr < kdm::action::AbstractActionRelationship >(actionRelation_));
}

void ActionElement::addAllActionRelation(const actionRelation_t& actionRelation_)
{
	for (auto i = actionRelation_.begin(); i != actionRelation_.end(); i++)
		addActionRelation(*i);
}



/*PROTECTED REGION ID(kdm::action::ActionElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ActionElement::eClassImpl() const
{
	return ActionPackage::_instance()->getActionElement();
}
 
