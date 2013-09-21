
#include "Module.hpp"
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::code;

Module::Module() : 
	m_codeElement()
{
}

Module::~Module()
{
}

Module::codeElement_t Module::getCodeElement() const
{
	return e4c::returned(m_codeElement);
}



