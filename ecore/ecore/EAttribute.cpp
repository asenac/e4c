
#include "EAttribute.hpp"
#include <ecore/EDataType.hpp>

using namespace ecore;

EAttribute::EAttribute() : 
	m_iD(),
    m_eAttributeType()
{
}

EAttribute::~EAttribute()
{
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
	m_eAttributeType = eAttributeType_;
}




