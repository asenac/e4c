
#include "ModuleDef.hpp"
#include <idlmm/IdlmmPackage.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::ModuleDef include) START*/
/*PROTECTED REGION END*/

ModuleDef::ModuleDef() : 
	m_prefix()
{
}

ModuleDef::~ModuleDef()
{
}

void ModuleDef::setPrefix(prefix_t _prefix)
{
	m_prefix = _prefix;;
}

ModuleDef::prefix_t ModuleDef::getPrefix() const
{
	return m_prefix;
}




/*PROTECTED REGION ID(idlmm::ModuleDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ModuleDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getModuleDef();
}
 
