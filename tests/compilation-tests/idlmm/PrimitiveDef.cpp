#include "PrimitiveDef.hpp"
#include <idlmm/IdlmmPackage.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::PrimitiveDef include) START*/
/*PROTECTED REGION END*/

PrimitiveDef::PrimitiveDef() : 
	m_kind()
{
	/*PROTECTED REGION ID(PrimitiveDef constructor) START*/
	/*PROTECTED REGION END*/
}

PrimitiveDef::~PrimitiveDef()
{
	/*PROTECTED REGION ID(PrimitiveDef destructor) START*/
	/*PROTECTED REGION END*/
}

void PrimitiveDef::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

PrimitiveDef::kind_t PrimitiveDef::getKind() const
{
	return m_kind;
}



/*PROTECTED REGION ID(idlmm::PrimitiveDef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr PrimitiveDef::eClassImpl() const
{
	return IdlmmPackage::_instance()->getPrimitiveDef();
}
 
