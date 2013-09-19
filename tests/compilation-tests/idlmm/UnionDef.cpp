
#include "UnionDef.hpp"
#include <idlmm/UnionField.hpp>
#include <idlmm/IDLType.hpp>
#include <idlmm/TypedefDef.hpp>

using namespace idlmm;

UnionDef::UnionDef() : 
	m_unionMembers(),
    m_containedDiscrim(),
    m_sharedDiscrim()
{
}

UnionDef::~UnionDef()
{
}



