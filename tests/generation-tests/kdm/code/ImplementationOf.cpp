
#include "ImplementationOf.hpp"
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

ImplementationOf::ImplementationOf() : 
	m_to(),
    m_from()
{
}

ImplementationOf::~ImplementationOf()
{
}

ImplementationOf::to_t ImplementationOf::getTo() const
{
	return e4c::returned(m_to);
}

ImplementationOf::from_t ImplementationOf::getFrom() const
{
	return e4c::returned(m_from);
}



