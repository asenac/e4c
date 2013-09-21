
#include "EObject.hpp"

using namespace ecore;

EObject::EObject()
{
}

EObject::~EObject()
{
}



ecore::EClass_ptr EObject::eClass()
{
	return ecore::EClass_ptr();
	
}
ecore::EBoolean EObject::eIsProxy()
{
	return ecore::EBoolean();
	
}
ecore::EResource EObject::eResource()
{
	return ecore::EResource();
	
}
ecore::EObject_ptr EObject::eContainer()
{
	return ecore::EObject_ptr();
	
}
ecore::EStructuralFeature_ptr EObject::eContainingFeature()
{
	return ecore::EStructuralFeature_ptr();
	
}
ecore::EReference_ptr EObject::eContainmentFeature()
{
	return ecore::EReference_ptr();
	
}
ecore::EEList EObject::eContents()
{
	return ecore::EEList();
	
}
ecore::ETreeIterator EObject::eAllContents()
{
	return ecore::ETreeIterator();
	
}
ecore::EEList EObject::eCrossReferences()
{
	return ecore::EEList();
	
}
ecore::EJavaObject EObject::eGet(ecore::EStructuralFeature_ptr feature)
{
	return ecore::EJavaObject();
	
}
ecore::EJavaObject EObject::eGet(ecore::EStructuralFeature_ptr feature, ecore::EBoolean resolve)
{
	return ecore::EJavaObject();
	
}
void EObject::eSet(ecore::EStructuralFeature_ptr feature, ecore::EJavaObject newValue)
{
}
ecore::EBoolean EObject::eIsSet(ecore::EStructuralFeature_ptr feature)
{
	return ecore::EBoolean();
	
}
void EObject::eUnset(ecore::EStructuralFeature_ptr feature)
{
}
ecore::EJavaObject EObject::eInvoke(ecore::EOperation_ptr operation, ecore::EEList arguments)
{
	return ecore::EJavaObject();
	
}

