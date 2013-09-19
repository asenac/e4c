
#include "MacroUnit.hpp"

using namespace kdm::code;

MacroUnit::MacroUnit() : 
	m_kind()
{
}

MacroUnit::~MacroUnit()
{
}

void MacroUnit::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

kind_t MacroUnit::getKind() const
{
	return m_kind;
}



