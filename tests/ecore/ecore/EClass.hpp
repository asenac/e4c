
#ifndef EMF_CPP_ECORE_ECLASS__HPP
#define EMF_CPP_ECORE_ECLASS__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EClassifier.hpp>

namespace ecore
{


// ecore::EClass
class EClass :  public virtual ::ecore::EClassifier
{
public:

	typedef EClass_ptr ptr_type;

	EClass();
	virtual ~EClass();

	// Typedefs
	typedef ::e4c::impl::attribute< EClass__abstract_tag > _abstract_t;
	typedef ::e4c::impl::attribute< EClass__interface_tag > _interface_t;
	typedef ::e4c::impl::reference< EClass__eSuperTypes_tag > _eSuperTypes_t;
	typedef ::e4c::impl::reference< EClass__eOperations_tag > _eOperations_t;
	typedef ::e4c::impl::reference< EClass__eAllAttributes_tag > _eAllAttributes_t;
	typedef ::e4c::impl::reference< EClass__eAllReferences_tag > _eAllReferences_t;
	typedef ::e4c::impl::reference< EClass__eReferences_tag > _eReferences_t;
	typedef ::e4c::impl::reference< EClass__eAttributes_tag > _eAttributes_t;
	typedef ::e4c::impl::reference< EClass__eAllContainments_tag > _eAllContainments_t;
	typedef ::e4c::impl::reference< EClass__eAllOperations_tag > _eAllOperations_t;
	typedef ::e4c::impl::reference< EClass__eAllStructuralFeatures_tag > _eAllStructuralFeatures_t;
	typedef ::e4c::impl::reference< EClass__eAllSuperTypes_tag > _eAllSuperTypes_t;
	typedef ::e4c::impl::reference< EClass__eIDAttribute_tag > _eIDAttribute_t;
	typedef ::e4c::impl::reference< EClass__eStructuralFeatures_tag > _eStructuralFeatures_t;
	typedef ::e4c::impl::reference< EClass__eGenericSuperTypes_tag > _eGenericSuperTypes_t;
	typedef ::e4c::impl::reference< EClass__eAllGenericSuperTypes_tag > _eAllGenericSuperTypes_t;

	
	// Members
	_abstract_t abstract;
	_interface_t interface;
	_eSuperTypes_t eSuperTypes;
	_eOperations_t eOperations;
	_eAllAttributes_t eAllAttributes;
	_eAllReferences_t eAllReferences;
	_eReferences_t eReferences;
	_eAttributes_t eAttributes;
	_eAllContainments_t eAllContainments;
	_eAllOperations_t eAllOperations;
	_eAllStructuralFeatures_t eAllStructuralFeatures;
	_eAllSuperTypes_t eAllSuperTypes;
	_eIDAttribute_t eIDAttribute;
	_eStructuralFeatures_t eStructuralFeatures;
	_eGenericSuperTypes_t eGenericSuperTypes;
	_eAllGenericSuperTypes_t eAllGenericSuperTypes;

};

} // ecore


#endif // EMF_CPP_ECORE_ECLASS__HPP
