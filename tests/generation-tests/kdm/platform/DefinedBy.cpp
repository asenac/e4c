
#include "DefinedBy.hpp"
#include <kdm/code/CodeItem.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::platform;

DefinedBy::DefinedBy() : 
	m_to(),
    m_from()
{
}

DefinedBy::~DefinedBy()
{
}

DefinedBy::to_t DefinedBy::getTo() const
{
	return e4c::returned(m_to);
}

DefinedBy::from_t DefinedBy::getFrom() const
{
	return e4c::returned(m_from);
}



