
#include "MultiplicityElement.hpp"
#include <emof/EmofPackage.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::MultiplicityElement include) START*/
/*PROTECTED REGION END*/

MultiplicityElement::MultiplicityElement() : 
	m_isOrdered(),
    m_isUnique(),
    m_lower(),
    m_upper()
{
	/*PROTECTED REGION ID(MultiplicityElement constructor) START*/
	/*PROTECTED REGION END*/
}

MultiplicityElement::~MultiplicityElement()
{
	/*PROTECTED REGION ID(MultiplicityElement destructor) START*/
	/*PROTECTED REGION END*/
}

void MultiplicityElement::setIsOrdered(isOrdered_t _isOrdered)
{
	m_isOrdered = _isOrdered;;
}

MultiplicityElement::isOrdered_t MultiplicityElement::getIsOrdered() const
{
	return m_isOrdered;
}

void MultiplicityElement::setIsUnique(isUnique_t _isUnique)
{
	m_isUnique = _isUnique;;
}

MultiplicityElement::isUnique_t MultiplicityElement::getIsUnique() const
{
	return m_isUnique;
}

void MultiplicityElement::setLower(lower_t _lower)
{
	m_lower = _lower;;
}

MultiplicityElement::lower_t MultiplicityElement::getLower() const
{
	return m_lower;
}

void MultiplicityElement::setUpper(upper_t _upper)
{
	m_upper = _upper;;
}

MultiplicityElement::upper_t MultiplicityElement::getUpper() const
{
	return m_upper;
}



/*PROTECTED REGION ID(emof::MultiplicityElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr MultiplicityElement::eClassImpl() const
{
	return EmofPackage::_instance()->getMultiplicityElement();
}
 
