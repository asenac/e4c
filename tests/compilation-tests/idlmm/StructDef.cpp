
#include "StructDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Field.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::StructDef include) START*/
/*PROTECTED REGION END*/

StructDef::StructDef() : 
	m_members()
{
	/*PROTECTED REGION ID(StructDef constructor) START*/
	/*PROTECTED REGION END*/
}

StructDef::~StructDef()
{
	/*PROTECTED REGION ID(StructDef destructor) START*/
	/*PROTECTED REGION END*/
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



/*PROTECTED REGION ID(idlmm::StructDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr StructDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getStructDef();
}
 
