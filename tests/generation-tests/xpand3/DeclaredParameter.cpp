
#include "DeclaredParameter.hpp"
#include <xpand3/Identifier.hpp>

using namespace xpand3;

DeclaredParameter::DeclaredParameter() : 
	m_name(),
    m_type()
{
}

DeclaredParameter::~DeclaredParameter()
{
}

DeclaredParameter::name_t DeclaredParameter::getName() const
{
	return e4c::returned(m_name);
}

DeclaredParameter::type_t DeclaredParameter::getType() const
{
	return e4c::returned(m_type);
}



