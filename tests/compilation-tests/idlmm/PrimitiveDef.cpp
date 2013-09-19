
#include "PrimitiveDef.hpp"

using namespace idlmm;

PrimitiveDef::PrimitiveDef() : 
	m_kind()
{
}

PrimitiveDef::~PrimitiveDef()
{
}

void PrimitiveDef::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

kind_t PrimitiveDef::getKind() const
{
	return m_kind;
}



