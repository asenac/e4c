
#include "ETypedElement.hpp"
#include <ecore/EClassifier.hpp>
#include <ecore/EGenericType.hpp>

using namespace ecore;

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
}

ETypedElement::~ETypedElement()
{
}

void ETypedElement::setOrdered(ordered_t _ordered)
{
	m_ordered = _ordered;;
}

ordered_t ETypedElement::getOrdered() const
{
	return m_ordered;
}

void ETypedElement::setUnique(unique_t _unique)
{
	m_unique = _unique;;
}

unique_t ETypedElement::getUnique() const
{
	return m_unique;
}

void ETypedElement::setLowerBound(lowerBound_t _lowerBound)
{
	m_lowerBound = _lowerBound;;
}

lowerBound_t ETypedElement::getLowerBound() const
{
	return m_lowerBound;
}

void ETypedElement::setUpperBound(upperBound_t _upperBound)
{
	m_upperBound = _upperBound;;
}

upperBound_t ETypedElement::getUpperBound() const
{
	return m_upperBound;
}

void ETypedElement::setMany(many_t _many)
{
	m_many = _many;;
}

many_t ETypedElement::getMany() const
{
	return m_many;
}

void ETypedElement::setRequired(required_t _required)
{
	m_required = _required;;
}

required_t ETypedElement::getRequired() const
{
	return m_required;
}



