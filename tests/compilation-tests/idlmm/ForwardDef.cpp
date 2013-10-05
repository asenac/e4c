#include "ForwardDef.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/InterfaceDef.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::ForwardDef include) START*/
/*PROTECTED REGION END*/

ForwardDef::ForwardDef() : 
	m_definition()
{
	/*PROTECTED REGION ID(ForwardDef constructor) START*/
	/*PROTECTED REGION END*/
}

ForwardDef::~ForwardDef()
{
	/*PROTECTED REGION ID(ForwardDef destructor) START*/
	/*PROTECTED REGION END*/
}

ForwardDef::definition_t ForwardDef::getDefinition() const
{
	return e4c::returned(m_definition);
}
void ForwardDef::setDefinition(definition_t definition_)
{
	if (m_definition == definition_)
		return;
	m_definition = definition_;
}



/*PROTECTED REGION ID(idlmm::ForwardDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ForwardDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getForwardDef();
}
 
