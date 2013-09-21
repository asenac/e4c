
#include "AttributeDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/ExceptionDef.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::AttributeDef include) START*/
/*PROTECTED REGION END*/

AttributeDef::AttributeDef() : 
	m_getRaises(),
    m_setRaises(),
    m_isReadonly()
{
}

AttributeDef::~AttributeDef()
{
}

AttributeDef::getRaises_t AttributeDef::getGetRaises() const
{
	return e4c::returned(m_getRaises);
}

void AttributeDef::addGetRaises(idlmm::ExceptionDef_ptr getRaises_)
{
	m_getRaises.push_back(getRaises_);
	
}

void AttributeDef::addAllGetRaises(const getRaises_t& getRaises_)
{
	for (auto i = getRaises_.begin(); i != getRaises_.end(); i++)
		addGetRaises(*i);
}


AttributeDef::setRaises_t AttributeDef::getSetRaises() const
{
	return e4c::returned(m_setRaises);
}

void AttributeDef::addSetRaises(idlmm::ExceptionDef_ptr setRaises_)
{
	m_setRaises.push_back(setRaises_);
	
}

void AttributeDef::addAllSetRaises(const setRaises_t& setRaises_)
{
	for (auto i = setRaises_.begin(); i != setRaises_.end(); i++)
		addSetRaises(*i);
}


void AttributeDef::setIsReadonly(isReadonly_t _isReadonly)
{
	m_isReadonly = _isReadonly;;
}

AttributeDef::isReadonly_t AttributeDef::getIsReadonly() const
{
	return m_isReadonly;
}




/*PROTECTED REGION ID(idlmm::AttributeDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AttributeDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getAttributeDef();
}
 
