
#include "ModuleDef.hpp"

using namespace idlmm;

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

prefix_t ModuleDef::getPrefix() const
{
	return m_prefix;
}



