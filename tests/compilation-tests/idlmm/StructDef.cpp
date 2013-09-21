
#include "StructDef.hpp"
#include <idlmm/Field.hpp>

using namespace idlmm;

StructDef::StructDef() : 
	m_members()
{
}

StructDef::~StructDef()
{
}

StructDef::members_t StructDef::getMembers() const
{
	return e4c::returned(m_members);
}


void StructDef::addMembers(idlmm::Field_ptr members_)
{
	m_members.push_back(std::unique_ptr < idlmm::Field >(members_));
}

void StructDef::addAllMembers(const members_t& members_)
{
	for (auto i = members_.begin(); i != members_.end(); i++)
		addMembers(*i);
}




