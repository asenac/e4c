
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

iD_t EAttribute::getID() const
{
	return m_iD;
}



