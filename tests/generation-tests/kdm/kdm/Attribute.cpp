
#include "Attribute.hpp"
#include <kdm/kdm/KdmPackage.hpp>

using namespace kdm::kdm;

/*PROTECTED REGION ID(kdm::kdm::Attribute include) START*/
/*PROTECTED REGION END*/

Attribute::Attribute() : 
	m_tag(),
    m_value()
{
	/*PROTECTED REGION ID(Attribute constructor) START*/
	/*PROTECTED REGION END*/
}

Attribute::~Attribute()
{
	/*PROTECTED REGION ID(Attribute destructor) START*/
	/*PROTECTED REGION END*/
}

void Attribute::setTag(tag_t _tag)
{
	m_tag = _tag;;
}

Attribute::tag_t Attribute::getTag() const
{
	return m_tag;
}

void Attribute::setValue(value_t _value)
{
	m_value = _value;;
}

Attribute::value_t Attribute::getValue() const
{
	return m_value;
}



/*PROTECTED REGION ID(kdm::kdm::Attribute implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Attribute::eClassImpl() const
{
	return KdmPackage::_instance()->getAttribute();
}
 
