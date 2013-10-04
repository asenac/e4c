
#include "GeneratedMetamodel.hpp"
#include <xtext/XtextPackage.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::GeneratedMetamodel include) START*/
/*PROTECTED REGION END*/

GeneratedMetamodel::GeneratedMetamodel() : 
	m_name()
{
	/*PROTECTED REGION ID(GeneratedMetamodel constructor) START*/
	/*PROTECTED REGION END*/
}

GeneratedMetamodel::~GeneratedMetamodel()
{
	/*PROTECTED REGION ID(GeneratedMetamodel destructor) START*/
	/*PROTECTED REGION END*/
}

void GeneratedMetamodel::setName(name_t _name)
{
	m_name = _name;;
}

GeneratedMetamodel::name_t GeneratedMetamodel::getName() const
{
	return m_name;
}



/*PROTECTED REGION ID(xtext::GeneratedMetamodel implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr GeneratedMetamodel::eClassImpl() const
{
	return XtextPackage::_instance()->getGeneratedMetamodel();
}
 
