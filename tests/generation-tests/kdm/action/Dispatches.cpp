
#include "Dispatches.hpp"
#include <kdm/code/DataElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

Dispatches::Dispatches() : 
	m_to(),
    m_from()
{
}

Dispatches::~Dispatches()
{
}

Dispatches::to_t Dispatches::getTo() const
{
	return e4c::returned(m_to);
}

Dispatches::from_t Dispatches::getFrom() const
{
	return e4c::returned(m_from);
}



