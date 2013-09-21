
#include "SequenceDef.hpp"
#include <idlmm/Expression.hpp>

using namespace idlmm;

SequenceDef::SequenceDef() : 
	m_bound()
{
}

SequenceDef::~SequenceDef()
{
}

SequenceDef::bound_t SequenceDef::getBound() const
{
	return e4c::returned(m_bound);
}

void SequenceDef::setBound(bound_t bound_)
{
	m_bound.reset(bound_);
}

SequenceDef::bound_t SequenceDef::releaseBound()
{
	return m_bound.release();
}




