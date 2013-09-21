
#include "DefinedType.hpp"
#include <kdm/code/Datatype.hpp>

using namespace kdm::code;

DefinedType::DefinedType() : 
	m_type(),
    m_codeElement()
{
}

DefinedType::~DefinedType()
{
}

DefinedType::type_t DefinedType::getType() const
{
	return e4c::returned(m_type);
}

DefinedType::codeElement_t DefinedType::getCodeElement() const
{
	return e4c::returned(m_codeElement);
}



