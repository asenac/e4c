
#include "EnumMember.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/EnumDef.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::EnumMember include) START*/
/*PROTECTED REGION END*/

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





/*PROTECTED REGION ID(idlmm::EnumMember implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EnumMember::eClassImpl() const
{
	return IdlmmPackage::_instance()->getEnumMember();
}
 
