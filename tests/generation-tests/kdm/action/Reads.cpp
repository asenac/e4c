
#include "Reads.hpp"
#include <kdm/code/DataElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

Reads::Reads() : 
	m_to(),
    m_from()
{
}

Reads::~Reads()
{
}

Reads::to_t Reads::getTo() const
{
	return e4c::returned(m_to);
}

Reads::from_t Reads::getFrom() const
{
	return e4c::returned(m_from);
}



