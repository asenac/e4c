
#include "CreateExtension.hpp"
#include <xpand3/DeclaredParameter.hpp>

using namespace xpand3::declaration;

CreateExtension::CreateExtension() : 
	m_toBeCreated()
{
}

CreateExtension::~CreateExtension()
{
}

CreateExtension::toBeCreated_t CreateExtension::getToBeCreated() const
{
	return e4c::returned(m_toBeCreated);
}



