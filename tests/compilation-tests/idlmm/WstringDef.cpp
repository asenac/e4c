
#include "WstringDef.hpp"
#include <idlmm/Expression.hpp>

using namespace idlmm;

WstringDef::WstringDef() : 
	m_bound()
{
}

WstringDef::~WstringDef()
{
}

WstringDef::bound_t WstringDef::getBound() const
{
	return e4c::returned(m_bound);
}

void WstringDef::setBound(bound_t bound_)
{
	m_bound.reset(bound_);
}

WstringDef::bound_t WstringDef::releaseBound()
{
	return m_bound.release();
}




