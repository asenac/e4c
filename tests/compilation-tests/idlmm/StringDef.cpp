
#include "StringDef.hpp"
#include <idlmm/Expression.hpp>

using namespace idlmm;

StringDef::StringDef() : 
	m_bound()
{
}

StringDef::~StringDef()
{
}

StringDef::bound_t StringDef::getBound() const
{
	return e4c::returned(m_bound);
}


void StringDef::setBound(bound_t bound_)
{
	m_bound.reset(bound_);
}

StringDef::bound_t StringDef::releaseBound()
{
	return m_bound.release();
}





