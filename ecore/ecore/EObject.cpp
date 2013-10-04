
#include "EObject.hpp"
#include <ecore/EcorePackage.hpp>

using namespace ecore;

/*PROTECTED REGION ID(ecore::EObject include) START*/
/*PROTECTED REGION END*/

EObject::EObject()
{
	/*PROTECTED REGION ID(EObject constructor) START*/
	/*PROTECTED REGION END*/
}

EObject::~EObject()
{
	/*PROTECTED REGION ID(EObject destructor) START*/
	/*PROTECTED REGION END*/
}


ecore::EClass_ptr EObject::eClass()
{
	/*PROTECTED REGION ID(ecore::EClass_ptr EObject::eClass) ENABLED START*/
	return eClassImpl();
	/*PROTECTED REGION END*/
}

ecore::EBoolean EObject::eIsProxy()
{
	/*PROTECTED REGION ID(ecore::EBoolean EObject::eIsProxy) START*/
	return ecore::EBoolean();
	/*PROTECTED REGION END*/
}

ecore::EResource EObject::eResource()
{
	/*PROTECTED REGION ID(ecore::EResource EObject::eResource) START*/
	return ecore::EResource();
	/*PROTECTED REGION END*/
}

ecore::EObject_ptr EObject::eContainer()
{
	/*PROTECTED REGION ID(ecore::EObject_ptr EObject::eContainer) START*/
	return ecore::EObject_ptr();
	/*PROTECTED REGION END*/
}

ecore::EStructuralFeature_ptr EObject::eContainingFeature()
{
	/*PROTECTED REGION ID(ecore::EStructuralFeature_ptr EObject::eContainingFeature) START*/
	return ecore::EStructuralFeature_ptr();
	/*PROTECTED REGION END*/
}

ecore::EReference_ptr EObject::eContainmentFeature()
{
	/*PROTECTED REGION ID(ecore::EReference_ptr EObject::eContainmentFeature) START*/
	return ecore::EReference_ptr();
	/*PROTECTED REGION END*/
}

ecore::EEList EObject::eContents()
{
	/*PROTECTED REGION ID(ecore::EEList EObject::eContents) START*/
	return ecore::EEList();
	/*PROTECTED REGION END*/
}

ecore::ETreeIterator EObject::eAllContents()
{
	/*PROTECTED REGION ID(ecore::ETreeIterator EObject::eAllContents) START*/
	return ecore::ETreeIterator();
	/*PROTECTED REGION END*/
}

ecore::EEList EObject::eCrossReferences()
{
	/*PROTECTED REGION ID(ecore::EEList EObject::eCrossReferences) START*/
	return ecore::EEList();
	/*PROTECTED REGION END*/
}

ecore::EJavaObject EObject::eGet(ecore::EStructuralFeature_ptr feature)
{
	/*PROTECTED REGION ID(ecore::EJavaObject EObject::eGetecore::EStructuralFeature_ptr feature) START*/
	return ecore::EJavaObject();
	/*PROTECTED REGION END*/
}

ecore::EJavaObject EObject::eGet(ecore::EStructuralFeature_ptr feature, ecore::EBoolean resolve)
{
	/*PROTECTED REGION ID(ecore::EJavaObject EObject::eGetecore::EStructuralFeature_ptr feature, ecore::EBoolean resolve) START*/
	return ecore::EJavaObject();
	/*PROTECTED REGION END*/
}

void EObject::eSet(ecore::EStructuralFeature_ptr feature, ecore::EJavaObject newValue)
{
	/*PROTECTED REGION ID(void EObject::eSetecore::EStructuralFeature_ptr feature, ecore::EJavaObject newValue) START*/
	/*PROTECTED REGION END*/
}

ecore::EBoolean EObject::eIsSet(ecore::EStructuralFeature_ptr feature)
{
	/*PROTECTED REGION ID(ecore::EBoolean EObject::eIsSetecore::EStructuralFeature_ptr feature) START*/
	return ecore::EBoolean();
	/*PROTECTED REGION END*/
}

void EObject::eUnset(ecore::EStructuralFeature_ptr feature)
{
	/*PROTECTED REGION ID(void EObject::eUnsetecore::EStructuralFeature_ptr feature) START*/
	/*PROTECTED REGION END*/
}

ecore::EJavaObject EObject::eInvoke(ecore::EOperation_ptr operation, ecore::EEList arguments)
{
	/*PROTECTED REGION ID(ecore::EJavaObject EObject::eInvokeecore::EOperation_ptr operation, ecore::EEList arguments) START*/
	return ecore::EJavaObject();
	/*PROTECTED REGION END*/
}


/*PROTECTED REGION ID(ecore::EObject implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EObject::eClassImpl() const
{
	return EcorePackage::_instance()->getEObject();
}
 
