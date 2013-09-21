
#include "PreprocessorDirective.hpp"
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::code;

PreprocessorDirective::PreprocessorDirective() : 
	m_codeElement()
{
}

PreprocessorDirective::~PreprocessorDirective()
{
}

PreprocessorDirective::codeElement_t PreprocessorDirective::getCodeElement() const
{
	return e4c::returned(m_codeElement);
}



