
#include "ExceptionDef.hpp"
#include <idlmm/Field.hpp>

using namespace idlmm;

ExceptionDef::ExceptionDef() : 
	m_typeCode(),
    m_members()
{
}

ExceptionDef::~ExceptionDef()
{
}

void ExceptionDef::setTypeCode(typeCode_t _typeCode)
{
	m_typeCode = _typeCode;;
}

typeCode_t ExceptionDef::getTypeCode() const
{
	return m_typeCode;
}



