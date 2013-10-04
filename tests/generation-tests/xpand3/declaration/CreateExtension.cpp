
#include "CreateExtension.hpp"
#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/DeclaredParameter.hpp>

using namespace xpand3::declaration;

/*PROTECTED REGION ID(xpand3::declaration::CreateExtension include) START*/
/*PROTECTED REGION END*/

CreateExtension::CreateExtension() : 
	m_toBeCreated()
{
	/*PROTECTED REGION ID(CreateExtension constructor) START*/
	/*PROTECTED REGION END*/
}

CreateExtension::~CreateExtension()
{
	/*PROTECTED REGION ID(CreateExtension destructor) START*/
	/*PROTECTED REGION END*/
}

CreateExtension::toBeCreated_t CreateExtension::getToBeCreated() const
{
	return e4c::returned(m_toBeCreated);
}

void CreateExtension::setToBeCreated(toBeCreated_t toBeCreated_)
{
	if (m_toBeCreated == toBeCreated_)
		return;
	m_toBeCreated = toBeCreated_;
}



/*PROTECTED REGION ID(xpand3::declaration::CreateExtension implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CreateExtension::eClassImpl() const
{
	return DeclarationPackage::_instance()->getCreateExtension();
}
 
