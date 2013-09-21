
#ifndef EMF_CPP_ECORE_EOBJECT__HPP
#define EMF_CPP_ECORE_EOBJECT__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class EObject
{
public:

	typedef EObject_ptr ptr_type;
	
	EObject();
	virtual ~EObject();

	
	
	ecore::EClass_ptr eClass();
	ecore::EBoolean eIsProxy();
	ecore::EResource eResource();
	ecore::EObject_ptr eContainer();
	ecore::EStructuralFeature_ptr eContainingFeature();
	ecore::EReference_ptr eContainmentFeature();
	ecore::EEList eContents();
	ecore::ETreeIterator eAllContents();
	ecore::EEList eCrossReferences();
	ecore::EJavaObject eGet(ecore::EStructuralFeature_ptr feature);
	ecore::EJavaObject eGet(ecore::EStructuralFeature_ptr feature, ecore::EBoolean resolve);
	void eSet(ecore::EStructuralFeature_ptr feature, ecore::EJavaObject newValue);
	ecore::EBoolean eIsSet(ecore::EStructuralFeature_ptr feature);
	void eUnset(ecore::EStructuralFeature_ptr feature);
	ecore::EJavaObject eInvoke(ecore::EOperation_ptr operation, ecore::EEList arguments);
		
protected:

	friend class EcorePackage;

	
	
};

} // ecore


#endif // EMF_CPP_ECORE_EOBJECT__HPP
