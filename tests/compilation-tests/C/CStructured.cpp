
#include "CStructured.hpp"
#include <C/CStructureContents.hpp>

using namespace C;

CStructured::CStructured() : 
	m_contains()
{
}

CStructured::~CStructured()
{
}

CStructured::contains_t CStructured::getContains() const
{
	return e4c::returned(m_contains);
}



