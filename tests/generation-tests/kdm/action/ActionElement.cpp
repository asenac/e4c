
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

kind_t ActionElement::getKind() const
{
	return m_kind;
}



