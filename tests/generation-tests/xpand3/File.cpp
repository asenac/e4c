
#include "File.hpp"
#include <xpand3/ImportStatement.hpp>
#include <xpand3/declaration/AbstractDeclaration.hpp>

using namespace xpand3;

File::File() : 
	m_imports(),
    m_declarations()
{
}

File::~File()
{
}

File::imports_t File::getImports() const
{
	return e4c::returned(m_imports);
}

File::declarations_t File::getDeclarations() const
{
	return e4c::returned(m_declarations);
}



