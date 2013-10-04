
#include "TypeRef.hpp"
#include <xtext/XtextPackage.hpp>
#include <xtext/AbstractMetamodelDeclaration.hpp>
#include <ecore/EClassifier.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::TypeRef include) START*/
/*PROTECTED REGION END*/

TypeRef::TypeRef() : 
	m_metamodel(),
    m_classifier()
{
	/*PROTECTED REGION ID(TypeRef constructor) START*/
	/*PROTECTED REGION END*/
}

TypeRef::~TypeRef()
{
	/*PROTECTED REGION ID(TypeRef destructor) START*/
	/*PROTECTED REGION END*/
}

TypeRef::metamodel_t TypeRef::getMetamodel() const
{
	return e4c::returned(m_metamodel);
}

void TypeRef::setMetamodel(metamodel_t metamodel_)
{
	if (m_metamodel == metamodel_)
		return;
	m_metamodel = metamodel_;
}

TypeRef::classifier_t TypeRef::getClassifier() const
{
	return e4c::returned(m_classifier);
}

void TypeRef::setClassifier(classifier_t classifier_)
{
	if (m_classifier == classifier_)
		return;
	m_classifier = classifier_;
}



/*PROTECTED REGION ID(xtext::TypeRef implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TypeRef::eClassImpl() const
{
	return XtextPackage::_instance()->getTypeRef();
}
 
