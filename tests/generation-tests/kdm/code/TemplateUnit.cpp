
#include "TemplateUnit.hpp"
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

TemplateUnit::TemplateUnit() : 
	m_codeElement()
{
}

TemplateUnit::~TemplateUnit()
{
}

TemplateUnit::codeElement_t TemplateUnit::getCodeElement() const
{
	return e4c::returned(m_codeElement);
}



