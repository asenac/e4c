
#include "EnumDef.hpp"
#include <idlmm/EnumMember.hpp>

using namespace idlmm;

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




