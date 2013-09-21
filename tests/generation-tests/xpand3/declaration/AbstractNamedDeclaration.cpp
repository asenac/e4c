
#include "AbstractNamedDeclaration.hpp"
#include <xpand3/Identifier.hpp>

using namespace xpand3::declaration;

AbstractNamedDeclaration::AbstractNamedDeclaration() : 
	m_name()
{
}

AbstractNamedDeclaration::~AbstractNamedDeclaration()
{
}

AbstractNamedDeclaration::name_t AbstractNamedDeclaration::getName() const
{
	return e4c::returned(m_name);
}



