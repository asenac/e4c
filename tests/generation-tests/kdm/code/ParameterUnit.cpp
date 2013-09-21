
#include "ParameterUnit.hpp"

using namespace kdm::code;

ParameterUnit::ParameterUnit() : 
	m_kind(),
    m_pos()
{
}

ParameterUnit::~ParameterUnit()
{
}

void ParameterUnit::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

ParameterUnit::kind_t ParameterUnit::getKind() const
{
	return m_kind;
}

void ParameterUnit::setPos(pos_t _pos)
{
	m_pos = _pos;;
}

ParameterUnit::pos_t ParameterUnit::getPos() const
{
	return m_pos;
}



