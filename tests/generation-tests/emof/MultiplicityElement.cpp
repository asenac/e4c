
#include "MultiplicityElement.hpp"

using namespace emof;

MultiplicityElement::MultiplicityElement() : 
	m_isOrdered(),
    m_isUnique(),
    m_lower(),
    m_upper()
{
}

MultiplicityElement::~MultiplicityElement()
{
}

void MultiplicityElement::setIsOrdered(isOrdered_t _isOrdered)
{
	m_isOrdered = _isOrdered;;
}

isOrdered_t MultiplicityElement::getIsOrdered() const
{
	return m_isOrdered;
}

void MultiplicityElement::setIsUnique(isUnique_t _isUnique)
{
	m_isUnique = _isUnique;;
}

isUnique_t MultiplicityElement::getIsUnique() const
{
	return m_isUnique;
}

void MultiplicityElement::setLower(lower_t _lower)
{
	m_lower = _lower;;
}

lower_t MultiplicityElement::getLower() const
{
	return m_lower;
}

void MultiplicityElement::setUpper(upper_t _upper)
{
	m_upper = _upper;;
}

upper_t MultiplicityElement::getUpper() const
{
	return m_upper;
}



