
#include "UnionDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/UnionField.hpp>
#include <idlmm/IDLType.hpp>
#include <idlmm/TypedefDef.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::UnionDef include) START*/
/*PROTECTED REGION END*/

UnionDef::UnionDef() : 
	m_unionMembers(),
    m_containedDiscrim(),
    m_sharedDiscrim()
{
	/*PROTECTED REGION ID(UnionDef constructor) START*/
	/*PROTECTED REGION END*/
}

UnionDef::~UnionDef()
{
	/*PROTECTED REGION ID(UnionDef destructor) START*/
	/*PROTECTED REGION END*/
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
	if (m_sharedDiscrim == sharedDiscrim_)
		return;
	m_sharedDiscrim = sharedDiscrim_;
}



/*PROTECTED REGION ID(idlmm::UnionDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UnionDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getUnionDef();
}
 
