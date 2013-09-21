
#include "RangeType.hpp"

using namespace kdm::code;

RangeType::RangeType() : 
	m_lower(),
    m_upper()
{
}

RangeType::~RangeType()
{
}

void RangeType::setLower(lower_t _lower)
{
	m_lower = _lower;;
}

RangeType::lower_t RangeType::getLower() const
{
	return m_lower;
}

void RangeType::setUpper(upper_t _upper)
{
	m_upper = _upper;;
}

RangeType::upper_t RangeType::getUpper() const
{
	return m_upper;
}



