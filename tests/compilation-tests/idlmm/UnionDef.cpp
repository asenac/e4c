
#include "UnionDef.hpp"
#include <idlmm/UnionField.hpp>
#include <idlmm/IDLType.hpp>
#include <idlmm/TypedefDef.hpp>

using namespace idlmm;

UnionDef::UnionDef() : 
	m_unionMembers(),
    m_containedDiscrim(),
    m_sharedDiscrim()
{
}

UnionDef::~UnionDef()
{
}

UnionDef::unionMembers_t UnionDef::getUnionMembers() const
{
	return e4c::returned(m_unionMembers);
}


void UnionDef::addUnionMembers(idlmm::UnionField_ptr unionMembers_)
{
	m_unionMembers.push_back(std::unique_ptr < idlmm::UnionField >(unionMembers_));
}

void UnionDef::addAllUnionMembers(const unionMembers_t& unionMembers_)
{
	for (auto i = unionMembers_.begin(); i != unionMembers_.end(); i++)
		addUnionMembers(*i);
}


UnionDef::containedDiscrim_t UnionDef::getContainedDiscrim() const
{
	return e4c::returned(m_containedDiscrim);
}


void UnionDef::setContainedDiscrim(containedDiscrim_t containedDiscrim_)
{
	m_containedDiscrim.reset(containedDiscrim_);
}

UnionDef::containedDiscrim_t UnionDef::releaseContainedDiscrim()
{
	return m_containedDiscrim.release();
}


UnionDef::sharedDiscrim_t UnionDef::getSharedDiscrim() const
{
	return e4c::returned(m_sharedDiscrim);
}

void UnionDef::setSharedDiscrim(sharedDiscrim_t sharedDiscrim_)
{
	m_sharedDiscrim = sharedDiscrim_;
	
}





