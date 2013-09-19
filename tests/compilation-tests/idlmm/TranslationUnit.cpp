
#include "TranslationUnit.hpp"
#include <idlmm/Contained.hpp>
#include <idlmm/Include.hpp>

using namespace idlmm;

TranslationUnit::TranslationUnit() : 
	m_contains(),
    m_identifier(),
    m_includes()
{
}

TranslationUnit::~TranslationUnit()
{
}

void TranslationUnit::setIdentifier(identifier_t _identifier)
{
	m_identifier = _identifier;;
}

identifier_t TranslationUnit::getIdentifier() const
{
	return m_identifier;
}



