
#include "VisibleIn.hpp"
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

VisibleIn::VisibleIn() : 
	m_to(),
    m_from()
{
}

VisibleIn::~VisibleIn()
{
}

VisibleIn::to_t VisibleIn::getTo() const
{
	return e4c::returned(m_to);
}

VisibleIn::from_t VisibleIn::getFrom() const
{
	return e4c::returned(m_from);
}



