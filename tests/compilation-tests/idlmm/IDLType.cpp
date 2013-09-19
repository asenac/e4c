
#include "IDLType.hpp"

using namespace idlmm;

IDLType::IDLType() : 
	m_typeCode()
{
}

IDLType::~IDLType()
{
}

void IDLType::setTypeCode(typeCode_t _typeCode)
{
	m_typeCode = _typeCode;;
}

typeCode_t IDLType::getTypeCode() const
{
	return m_typeCode;
}



