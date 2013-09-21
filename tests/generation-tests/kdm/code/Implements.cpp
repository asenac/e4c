
#include "Implements.hpp"
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

Implements::Implements() : 
	m_to(),
    m_from()
{
}

Implements::~Implements()
{
}

Implements::to_t Implements::getTo() const
{
	return e4c::returned(m_to);
}

Implements::from_t Implements::getFrom() const
{
	return e4c::returned(m_from);
}



