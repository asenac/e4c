
#include "ExceptionDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Field.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::ExceptionDef include) START*/
/*PROTECTED REGION END*/

ExceptionDef::ExceptionDef() : 
	m_typeCode(),
    m_members()
{
	/*PROTECTED REGION ID(ExceptionDef constructor) START*/
	/*PROTECTED REGION END*/
}

ExceptionDef::~ExceptionDef()
{
	/*PROTECTED REGION ID(ExceptionDef destructor) START*/
	/*PROTECTED REGION END*/
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



/*PROTECTED REGION ID(idlmm::ExceptionDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ExceptionDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getExceptionDef();
}
 
