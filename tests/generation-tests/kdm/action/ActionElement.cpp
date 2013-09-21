
#include "ActionElement.hpp"
#include <kdm/code/AbstractCodeElement.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

using namespace kdm::action;

ActionElement::ActionElement() : 
	m_kind(),
    m_codeElement(),
    m_actionRelation()
{
}

ActionElement::~ActionElement()
{
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

ActionElement::actionRelation_t ActionElement::getActionRelation() const
{
	return e4c::returned(m_actionRelation);
}



