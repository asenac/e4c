
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

void ImportStatement::setExported(exported_t _exported)
{
	m_exported = _exported;;
}

exported_t ImportStatement::getExported() const
{
	return m_exported;
}



