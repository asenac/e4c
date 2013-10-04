
#include "JavaExtension.hpp"
#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::declaration;

/*PROTECTED REGION ID(xpand3::declaration::JavaExtension include) START*/
/*PROTECTED REGION END*/

JavaExtension::JavaExtension() : 
	m_javaType(),
    m_javaMethod(),
    m_javaParamTypes()
{
	/*PROTECTED REGION ID(JavaExtension constructor) START*/
	/*PROTECTED REGION END*/
}

JavaExtension::~JavaExtension()
{
	/*PROTECTED REGION ID(JavaExtension destructor) START*/
	/*PROTECTED REGION END*/
}

JavaExtension::javaType_t JavaExtension::getJavaType() const
{
	return e4c::returned(m_javaType);
}


void JavaExtension::setJavaType(javaType_t javaType_)
{
	m_javaType.reset(javaType_);
}

JavaExtension::javaType_t JavaExtension::releaseJavaType()
{
	return m_javaType.release();
}

JavaExtension::javaMethod_t JavaExtension::getJavaMethod() const
{
	return e4c::returned(m_javaMethod);
}


void JavaExtension::setJavaMethod(javaMethod_t javaMethod_)
{
	m_javaMethod.reset(javaMethod_);
}

JavaExtension::javaMethod_t JavaExtension::releaseJavaMethod()
{
	return m_javaMethod.release();
}

JavaExtension::javaParamTypes_t JavaExtension::getJavaParamTypes() const
{
	return e4c::returned(m_javaParamTypes);
}


void JavaExtension::addJavaParamTypes(xpand3::Identifier_ptr javaParamTypes_)
{
	m_javaParamTypes.push_back(std::unique_ptr < xpand3::Identifier >(javaParamTypes_));
}

void JavaExtension::addAllJavaParamTypes(const javaParamTypes_t& javaParamTypes_)
{
	for (auto i = javaParamTypes_.begin(); i != javaParamTypes_.end(); i++)
		addJavaParamTypes(*i);
}



/*PROTECTED REGION ID(xpand3::declaration::JavaExtension implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr JavaExtension::eClassImpl() const
{
	return DeclarationPackage::_instance()->getJavaExtension();
}
 
