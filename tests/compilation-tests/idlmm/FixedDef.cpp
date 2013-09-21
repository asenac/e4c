
#include "FixedDef.hpp"
#include <idlmm/Expression.hpp>

using namespace idlmm;

FixedDef::FixedDef() : 
	m_digits(),
    m_scale()
{
}

FixedDef::~FixedDef()
{
}

FixedDef::digits_t FixedDef::getDigits() const
{
	return e4c::returned(m_digits);
}


void FixedDef::setDigits(digits_t digits_)
{
	m_digits.reset(digits_);
}

FixedDef::digits_t FixedDef::releaseDigits()
{
	return m_digits.release();
}


FixedDef::scale_t FixedDef::getScale() const
{
	return e4c::returned(m_scale);
}


void FixedDef::setScale(scale_t scale_)
{
	m_scale.reset(scale_);
}

FixedDef::scale_t FixedDef::releaseScale()
{
	return m_scale.release();
}




