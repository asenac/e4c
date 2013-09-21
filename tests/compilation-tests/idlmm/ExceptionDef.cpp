
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

ExceptionDef::typeCode_t ExceptionDef::getTypeCode() const
{
	return m_typeCode;
}

ExceptionDef::members_t ExceptionDef::getMembers() const
{
	return e4c::returned(m_members);
}


void ExceptionDef::addMembers(idlmm::Field_ptr members_)
{
	m_members.push_back(std::unique_ptr < idlmm::Field >(members_));
}

void ExceptionDef::addAllMembers(const members_t& members_)
{
	for (auto i = members_.begin(); i != members_.end(); i++)
		addMembers(*i);
}





