
#include "HasValue.hpp"
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

HasValue::HasValue() : 
	m_to(),
    m_from()
{
}

HasValue::~HasValue()
{
}

HasValue::to_t HasValue::getTo() const
{
	return e4c::returned(m_to);
}

HasValue::from_t HasValue::getFrom() const
{
	return e4c::returned(m_from);
}



