#include "ETypedElement.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::ETypedElement include) START*/
/*PROTECTED REGION END*/

ETypedElement::ETypedElement() : 
	m_ordered(),
    m_unique(),
    m_lowerBound(),
    m_upperBound(),
    m_many(),
    m_required(),
    m_eType(),
    m_eGenericType()
{
	/*PROTECTED REGION ID(ETypedElement constructor) START*/
	/*PROTECTED REGION END*/
}

ETypedElement::~ETypedElement()
{
	/*PROTECTED REGION ID(ETypedElement destructor) START*/
	/*PROTECTED REGION END*/
}

void ETypedElement::setOrdered(ordered_t _ordered)
{
	m_ordered = _ordered;;
}

ETypedElement::ordered_t ETypedElement::getOrdered() const
{
	return m_ordered;
}

void ETypedElement::setUnique(unique_t _unique)
{
	m_unique = _unique;;
}

ETypedElement::unique_t ETypedElement::getUnique() const
{
	return m_unique;
}

void ETypedElement::setLowerBound(lowerBound_t _lowerBound)
{
	m_lowerBound = _lowerBound;;
}

ETypedElement::lowerBound_t ETypedElement::getLowerBound() const
{
	return m_lowerBound;
}

void ETypedElement::setUpperBound(upperBound_t _upperBound)
{
	m_upperBound = _upperBound;;
}

ETypedElement::upperBound_t ETypedElement::getUpperBound() const
{
	return m_upperBound;
}

void ETypedElement::setMany(many_t _many)
{
	m_many = _many;;
}

ETypedElement::many_t ETypedElement::getMany() const
{
	return m_many;
}

void ETypedElement::setRequired(required_t _required)
{
	m_required = _required;;
}

ETypedElement::required_t ETypedElement::getRequired() const
{
	return m_required;
}

ETypedElement::eType_t ETypedElement::getEType() const
{
	return e4c::returned(m_eType);
}
void ETypedElement::setEType(eType_t eType_)
{
	if (m_eType == eType_)
		return;
	m_eType = eType_;
}

ETypedElement::eGenericType_t ETypedElement::getEGenericType() const
{
	return e4c::returned(m_eGenericType);
}

void ETypedElement::setEGenericType(eGenericType_t eGenericType_)
{
	m_eGenericType.reset(eGenericType_);
}

ETypedElement::eGenericType_t ETypedElement::releaseEGenericType()
{
	return m_eGenericType.release();
}



/*PROTECTED REGION ID(ecore::ETypedElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ETypedElement::eClassImpl() const
{
	return EcorePackage::_instance()->getETypedElement();
}
 
