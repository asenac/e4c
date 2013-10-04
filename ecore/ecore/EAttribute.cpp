
#include "EAttribute.hpp"
#include <ecore/EcorePackage.hpp>
#include <ecore/EDataType.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::EAttribute include) START*/
/*PROTECTED REGION END*/

EAttribute::EAttribute() : 
	m_iD(),
    m_eAttributeType()
{
	/*PROTECTED REGION ID(EAttribute constructor) START*/
	/*PROTECTED REGION END*/
}

EAttribute::~EAttribute()
{
	/*PROTECTED REGION ID(EAttribute destructor) START*/
	/*PROTECTED REGION END*/
}

void EAttribute::setID(iD_t _iD)
{
	m_iD = _iD;;
}

EAttribute::iD_t EAttribute::getID() const
{
	return m_iD;
}

EAttribute::eAttributeType_t EAttribute::getEAttributeType() const
{
	return e4c::returned(m_eAttributeType);
}

void EAttribute::setEAttributeType(eAttributeType_t eAttributeType_)
{
	if (m_eAttributeType == eAttributeType_)
		return;
	m_eAttributeType = eAttributeType_;
}



/*PROTECTED REGION ID(ecore::EAttribute implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EAttribute::eClassImpl() const
{
	return EcorePackage::_instance()->getEAttribute();
}
 
