
#include "Typed.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/IDLType.hpp>
#include <idlmm/TypedefDef.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::Typed include) START*/
/*PROTECTED REGION END*/

Typed::Typed() : 
	m_containedType(),
    m_sharedType()
{
}

Typed::~Typed()
{
}

Typed::containedType_t Typed::getContainedType() const
{
	return e4c::returned(m_containedType);
}


void Typed::setContainedType(containedType_t containedType_)
{
	m_containedType.reset(containedType_);
}

Typed::containedType_t Typed::releaseContainedType()
{
	return m_containedType.release();
}


Typed::sharedType_t Typed::getSharedType() const
{
	return e4c::returned(m_sharedType);
}

void Typed::setSharedType(sharedType_t sharedType_)
{
	m_sharedType = sharedType_;
	
}





/*PROTECTED REGION ID(idlmm::Typed implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Typed::eClassImpl() const
{
	return IdlmmPackage::_instance()->getTyped();
}
 
