
#include "CallableUnit.hpp"

using namespace kdm::code;

CallableUnit::CallableUnit() : 
	m_kind()
{
}

CallableUnit::~CallableUnit()
{
}

void CallableUnit::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

CallableUnit::kind_t CallableUnit::getKind() const
{
	return m_kind;
}



