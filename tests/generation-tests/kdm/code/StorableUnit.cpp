
#include "StorableUnit.hpp"

using namespace kdm::code;

StorableUnit::StorableUnit() : 
	m_kind()
{
}

StorableUnit::~StorableUnit()
{
}

void StorableUnit::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

kind_t StorableUnit::getKind() const
{
	return m_kind;
}



