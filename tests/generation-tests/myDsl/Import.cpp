
#include "Import.hpp"

using namespace myDsl;

Import::Import() : 
	m_importURI()
{
}

Import::~Import()
{
}

void Import::setImportURI(importURI_t _importURI)
{
	m_importURI = _importURI;;
}

importURI_t Import::getImportURI() const
{
	return m_importURI;
}



