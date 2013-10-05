#include "FixedDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Expression.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::FixedDef include) START*/
/*PROTECTED REGION END*/

FixedDef::FixedDef() : 
	m_digits(),
    m_scale()
{
	/*PROTECTED REGION ID(FixedDef constructor) START*/
	/*PROTECTED REGION END*/
}

FixedDef::~FixedDef()
{
	/*PROTECTED REGION ID(FixedDef destructor) START*/
	/*PROTECTED REGION END*/
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



/*PROTECTED REGION ID(idlmm::FixedDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr FixedDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getFixedDef();
}
 
