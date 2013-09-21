
#include "Typed.hpp"
#include <idlmm/IDLType.hpp>
#include <idlmm/TypedefDef.hpp>

using namespace idlmm;

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




