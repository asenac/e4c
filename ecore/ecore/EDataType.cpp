
#include "EDataType.hpp"
#include <ecore/EcorePackage.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::EDataType include) START*/
/*PROTECTED REGION END*/

EDataType::EDataType() : 
	m_serializable()
{
}

EDataType::~EDataType()
{
}

void EDataType::setSerializable(serializable_t _serializable)
{
	m_serializable = _serializable;;
}

EDataType::serializable_t EDataType::getSerializable() const
{
	return m_serializable;
}




/*PROTECTED REGION ID(ecore::EDataType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EDataType::eClassImpl() const
{
	return EcorePackage::_instance()->getEDataType();
}
 
