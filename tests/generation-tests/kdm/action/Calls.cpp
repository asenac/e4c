
#include "Calls.hpp"
#include <kdm/code/ControlElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

Calls::Calls() : 
	m_to(),
    m_from()
{
}

Calls::~Calls()
{
}

Calls::to_t Calls::getTo() const
{
	return e4c::returned(m_to);
}

Calls::from_t Calls::getFrom() const
{
	return e4c::returned(m_from);
}



