
#include "Imports.hpp"
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

Imports::Imports() : 
	m_to(),
    m_from()
{
}

Imports::~Imports()
{
}

Imports::to_t Imports::getTo() const
{
	return e4c::returned(m_to);
}

Imports::from_t Imports::getFrom() const
{
	return e4c::returned(m_from);
}



