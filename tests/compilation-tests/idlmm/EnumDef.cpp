#include "EnumDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/EnumMember.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::EnumDef include) START*/
/*PROTECTED REGION END*/

EnumDef::EnumDef() :
    m_members()
{
    /*PROTECTED REGION ID(EnumDef constructor) START*/
    /*PROTECTED REGION END*/
}

EnumDef::~EnumDef()
{
    /*PROTECTED REGION ID(EnumDef destructor) START*/
    /*PROTECTED REGION END*/
}

EnumDef::members_t EnumDef::getMembers() const
{
    return e4c::returned(m_members);
}

void EnumDef::addMembers(idlmm::EnumMember_ptr members_)
{
    assert(members_);
    members_->setEnum(this);
    m_members.push_back(std::unique_ptr < idlmm::EnumMember >(members_));
}

void EnumDef::addAllMembers(const members_t& members_)
{
    for (auto i = members_.begin(); i != members_.end(); i++)
        addMembers(*i);
}

void EnumDef::removeMembers(idlmm::EnumMember_ptr members_)
{
    assert(members_);
    e4c::remove(m_members, members_);
}

void EnumDef::clearMembers()
{
    m_members.clear();
}



/*PROTECTED REGION ID(idlmm::EnumDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EnumDef::eClassImpl() const
{
    return IdlmmPackage::_instance()->getEnumDef();
}

