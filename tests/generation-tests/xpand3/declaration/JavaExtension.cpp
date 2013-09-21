
#include "JavaExtension.hpp"
#include <xpand3/Identifier.hpp>

using namespace xpand3::declaration;

JavaExtension::JavaExtension() : 
	m_javaType(),
    m_javaMethod(),
    m_javaParamTypes()
{
}

JavaExtension::~JavaExtension()
{
}

JavaExtension::javaType_t JavaExtension::getJavaType() const
{
	return e4c::returned(m_javaType);
}

JavaExtension::javaMethod_t JavaExtension::getJavaMethod() const
{
	return e4c::returned(m_javaMethod);
}

JavaExtension::javaParamTypes_t JavaExtension::getJavaParamTypes() const
{
	return e4c::returned(m_javaParamTypes);
}



