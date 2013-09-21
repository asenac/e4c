
#include "EnumLiteralDeclaration.hpp"
#include <ecore/EEnumLiteral.hpp>
#include <xtext/Keyword.hpp>

using namespace xtext;

EnumLiteralDeclaration::EnumLiteralDeclaration() : 
	m_enumLiteral(),
    m_literal()
{
}

EnumLiteralDeclaration::~EnumLiteralDeclaration()
{
}

EnumLiteralDeclaration::enumLiteral_t EnumLiteralDeclaration::getEnumLiteral() const
{
	return e4c::returned(m_enumLiteral);
}

EnumLiteralDeclaration::literal_t EnumLiteralDeclaration::getLiteral() const
{
	return e4c::returned(m_literal);
}



