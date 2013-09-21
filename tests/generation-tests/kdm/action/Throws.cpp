
#include "Throws.hpp"
#include <kdm/code/DataElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

Throws::Throws() : 
	m_to(),
    m_from()
{
}

Throws::~Throws()
{
}

Throws::to_t Throws::getTo() const
{
	return e4c::returned(m_to);
}

Throws::from_t Throws::getFrom() const
{
	return e4c::returned(m_from);
}



