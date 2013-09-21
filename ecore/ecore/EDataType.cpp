
#include "EDataType.hpp"

using namespace ecore;

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




