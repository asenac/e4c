
#include "RelationalSchema.hpp"
#include <kdm/code/CodeItem.hpp>

using namespace kdm::data;

RelationalSchema::RelationalSchema() : 
	m_codeElement()
{
}

RelationalSchema::~RelationalSchema()
{
}

RelationalSchema::codeElement_t RelationalSchema::getCodeElement() const
{
	return e4c::returned(m_codeElement);
}



