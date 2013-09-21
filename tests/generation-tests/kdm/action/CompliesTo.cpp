
#include "CompliesTo.hpp"
#include <kdm/code/CodeItem.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

CompliesTo::CompliesTo() : 
	m_to(),
    m_from()
{
}

CompliesTo::~CompliesTo()
{
}

CompliesTo::to_t CompliesTo::getTo() const
{
	return e4c::returned(m_to);
}

CompliesTo::from_t CompliesTo::getFrom() const
{
	return e4c::returned(m_from);
}



