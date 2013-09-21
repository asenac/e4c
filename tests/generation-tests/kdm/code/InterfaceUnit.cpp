
#include "InterfaceUnit.hpp"
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

InterfaceUnit::InterfaceUnit() : 
	m_codeElement()
{
}

InterfaceUnit::~InterfaceUnit()
{
}

InterfaceUnit::codeElement_t InterfaceUnit::getCodeElement() const
{
	return e4c::returned(m_codeElement);
}



