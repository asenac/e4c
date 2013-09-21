
#include "HasType.hpp"
#include <kdm/code/Datatype.hpp>
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

HasType::HasType() : 
	m_to(),
    m_from()
{
}

HasType::~HasType()
{
}

HasType::to_t HasType::getTo() const
{
	return e4c::returned(m_to);
}

HasType::from_t HasType::getFrom() const
{
	return e4c::returned(m_from);
}



