
#include "SourceRef.hpp"
#include <kdm/source/SourceRegion.hpp>

using namespace kdm::source;

SourceRef::SourceRef() : 
	m_region(),
    m_language(),
    m_snippet()
{
}

SourceRef::~SourceRef()
{
}

void SourceRef::setLanguage(language_t _language)
{
	m_language = _language;;
}

language_t SourceRef::getLanguage() const
{
	return m_language;
}

void SourceRef::setSnippet(snippet_t _snippet)
{
	m_snippet = _snippet;;
}

snippet_t SourceRef::getSnippet() const
{
	return m_snippet;
}



