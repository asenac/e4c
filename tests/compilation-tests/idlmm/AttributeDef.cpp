
#include "AttributeDef.hpp"
#include <idlmm/ExceptionDef.hpp>

using namespace idlmm;

AttributeDef::AttributeDef() : 
	m_getRaises(),
    m_setRaises(),
    m_isReadonly()
{
}

AttributeDef::~AttributeDef()
{
}

void AttributeDef::setIsReadonly(isReadonly_t _isReadonly)
{
	m_isReadonly = _isReadonly;;
}

isReadonly_t AttributeDef::getIsReadonly() const
{
	return m_isReadonly;
}



