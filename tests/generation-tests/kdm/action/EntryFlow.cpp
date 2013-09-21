
#include "EntryFlow.hpp"
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/ControlElement.hpp>

using namespace kdm::action;

EntryFlow::EntryFlow() : 
	m_to(),
    m_from()
{
}

EntryFlow::~EntryFlow()
{
}

EntryFlow::to_t EntryFlow::getTo() const
{
	return e4c::returned(m_to);
}

EntryFlow::from_t EntryFlow::getFrom() const
{
	return e4c::returned(m_from);
}



