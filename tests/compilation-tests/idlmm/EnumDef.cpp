
#include "EnumDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/EnumMember.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::EnumDef include) START*/
/*PROTECTED REGION END*/

EnumDef::EnumDef() : 
	m_members()
{
}

EnumDef::~EnumDef()
{
}

EnumDef::members_t EnumDef::getMembers() const
{
	return e4c::returned(m_members);
}


void EnumDef::addMembers(idlmm::EnumMember_ptr members_)
{
	members_->setEnum(this);
	m_members.push_back(std::unique_ptr < idlmm::EnumMember >(members_));
}

void EnumDef::addAllMembers(const members_t& members_)
{
	for (auto i = members_.begin(); i != members_.end(); i++)
		addMembers(*i);
}





/*PROTECTED REGION ID(idlmm::EnumDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EnumDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getEnumDef();
}
 
