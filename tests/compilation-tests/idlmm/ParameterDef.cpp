#include "ParameterDef.hpp"
#include <idlmm/IdlmmPackage.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::ParameterDef include) START*/
/*PROTECTED REGION END*/

ParameterDef::ParameterDef() : 
	m_identifier(),
    m_direction()
{
	/*PROTECTED REGION ID(ParameterDef constructor) START*/
	/*PROTECTED REGION END*/
}

ParameterDef::~ParameterDef()
{
	/*PROTECTED REGION ID(ParameterDef destructor) START*/
	/*PROTECTED REGION END*/
}

void ParameterDef::setIdentifier(identifier_t _identifier)
{
	m_identifier = _identifier;;
}

ParameterDef::identifier_t ParameterDef::getIdentifier() const
{
	return m_identifier;
}

void ParameterDef::setDirection(direction_t _direction)
{
	m_direction = _direction;;
}

ParameterDef::direction_t ParameterDef::getDirection() const
{
	return m_direction;
}



/*PROTECTED REGION ID(idlmm::ParameterDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ParameterDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getParameterDef();
}
 
