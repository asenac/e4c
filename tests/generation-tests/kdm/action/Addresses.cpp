
#include "Addresses.hpp"
#include <kdm/code/ComputationalObject.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

Addresses::Addresses() : 
	m_to(),
    m_from()
{
}

Addresses::~Addresses()
{
}

Addresses::to_t Addresses::getTo() const
{
	return e4c::returned(m_to);
}

Addresses::from_t Addresses::getFrom() const
{
	return e4c::returned(m_from);
}



