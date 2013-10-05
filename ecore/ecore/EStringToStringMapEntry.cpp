#include "EStringToStringMapEntry.hpp"
#include <ecore/EcorePackage.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::EStringToStringMapEntry include) START*/
/*PROTECTED REGION END*/

EStringToStringMapEntry::EStringToStringMapEntry() : 
	m_key(),
    m_value()
{
	/*PROTECTED REGION ID(EStringToStringMapEntry constructor) START*/
	/*PROTECTED REGION END*/
}

EStringToStringMapEntry::~EStringToStringMapEntry()
{
	/*PROTECTED REGION ID(EStringToStringMapEntry destructor) START*/
	/*PROTECTED REGION END*/
}

void EStringToStringMapEntry::setKey(key_t _key)
{
	m_key = _key;;
}

EStringToStringMapEntry::key_t EStringToStringMapEntry::getKey() const
{
	return m_key;
}

void EStringToStringMapEntry::setValue(value_t _value)
{
	m_value = _value;;
}

EStringToStringMapEntry::value_t EStringToStringMapEntry::getValue() const
{
	return m_value;
}



/*PROTECTED REGION ID(ecore::EStringToStringMapEntry implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EStringToStringMapEntry::eClassImpl() const
{
	return EcorePackage::_instance()->getEStringToStringMapEntry();
}
 
