
#include "Writes.hpp"
#include <kdm/code/DataElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

Writes::Writes() : 
	m_to(),
    m_from()
{
}

Writes::~Writes()
{
}

Writes::to_t Writes::getTo() const
{
	return e4c::returned(m_to);
}

Writes::from_t Writes::getFrom() const
{
	return e4c::returned(m_from);
}



