
#include "ForwardDef.hpp"
#include <idlmm/InterfaceDef.hpp>

using namespace idlmm;

ForwardDef::ForwardDef() : 
	m_definition()
{
}

ForwardDef::~ForwardDef()
{
}

ForwardDef::definition_t ForwardDef::getDefinition() const
{
	return e4c::returned(m_definition);
}

void ForwardDef::setDefinition(definition_t definition_)
{
	m_definition = definition_;
}




