
#include "ExtendedValue.hpp"
#include <kdm/kdm/TagDefinition.hpp>

using namespace kdm::kdm;

ExtendedValue::ExtendedValue() : 
	m_tag()
{
}

ExtendedValue::~ExtendedValue()
{
}

ExtendedValue::tag_t ExtendedValue::getTag() const
{
	return e4c::returned(m_tag);
}



