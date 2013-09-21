
#include "EnumMember.hpp"
#include <idlmm/EnumDef.hpp>

using namespace idlmm;

EnumMember::EnumMember() : 
	m_enum()
{
}

EnumMember::~EnumMember()
{
}

EnumMember::enum_t EnumMember::getEnum() const
{
	return e4c::returned(m_enum);
}


void EnumMember::setEnum(enum_t enum_)
{
	m_enum = enum_;
}





