
#include "ImportStatement.hpp"
#include <xpand3/Identifier.hpp>

using namespace xpand3;

ImportStatement::ImportStatement() : 
	m_importedId(),
    m_exported()
{
}

ImportStatement::~ImportStatement()
{
}

ImportStatement::importedId_t ImportStatement::getImportedId() const
{
	return e4c::returned(m_importedId);
}

void ImportStatement::setExported(exported_t _exported)
{
	m_exported = _exported;;
}

ImportStatement::exported_t ImportStatement::getExported() const
{
	return m_exported;
}



