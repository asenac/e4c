
#include "Include.hpp"
#include <idlmm/TranslationUnit.hpp>

using namespace idlmm;

Include::Include() : 
	m_importURI(),
    m_translationUnit()
{
}

Include::~Include()
{
}

void Include::setImportURI(importURI_t _importURI)
{
	m_importURI = _importURI;;
}

importURI_t Include::getImportURI() const
{
	return m_importURI;
}



