
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

TranslationUnit::contains_t TranslationUnit::getContains() const
{
	return e4c::returned(m_contains);
}

void TranslationUnit::addContains(idlmm::Contained_ptr contains_)
{
	m_contains.push_back(std::unique_ptr < idlmm::Contained >(contains_));
}


void TranslationUnit::setIdentifier(identifier_t _identifier)
{
	m_identifier = _identifier;;
}

TranslationUnit::identifier_t TranslationUnit::getIdentifier() const
{
	return m_identifier;
}

TranslationUnit::includes_t TranslationUnit::getIncludes() const
{
	return e4c::returned(m_includes);
}

void TranslationUnit::addIncludes(idlmm::Include_ptr includes_)
{
	m_includes.push_back(std::unique_ptr < idlmm::Include >(includes_));
}




