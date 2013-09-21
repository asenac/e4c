
#include "Extends.hpp"
#include <kdm/code/Datatype.hpp>

using namespace kdm::code;

Extends::Extends() : 
	m_to(),
    m_from()
{
}

Extends::~Extends()
{
}

Extends::to_t Extends::getTo() const
{
	return e4c::returned(m_to);
}

Extends::from_t Extends::getFrom() const
{
	return e4c::returned(m_from);
}



