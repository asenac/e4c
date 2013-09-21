
#include "NamespaceUnit.hpp"
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

NamespaceUnit::NamespaceUnit() : 
	m_groupedCode()
{
}

NamespaceUnit::~NamespaceUnit()
{
}

NamespaceUnit::groupedCode_t NamespaceUnit::getGroupedCode() const
{
	return e4c::returned(m_groupedCode);
}



