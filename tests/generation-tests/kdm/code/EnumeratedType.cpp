
#include "EnumeratedType.hpp"
#include <kdm/code/Value.hpp>

using namespace kdm::code;

EnumeratedType::EnumeratedType() : 
	m_value()
{
}

EnumeratedType::~EnumeratedType()
{
}

EnumeratedType::value_t EnumeratedType::getValue() const
{
	return e4c::returned(m_value);
}



