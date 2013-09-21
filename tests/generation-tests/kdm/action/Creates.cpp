
#include "Creates.hpp"
#include <kdm/code/Datatype.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

Creates::Creates() : 
	m_to(),
    m_from()
{
}

Creates::~Creates()
{
}

Creates::to_t Creates::getTo() const
{
	return e4c::returned(m_to);
}

Creates::from_t Creates::getFrom() const
{
	return e4c::returned(m_from);
}



