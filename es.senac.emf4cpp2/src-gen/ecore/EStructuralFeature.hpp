
#ifndef EMF_CPP_ECORE_ESTRUCTURALFEATURE__HPP
#define EMF_CPP_ECORE_ESTRUCTURALFEATURE__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ETypedElement.hpp>

namespace ecore
{


// ecore::EStructuralFeature
class EStructuralFeature :  public virtual ::ecore::ETypedElement
{
public:

	typedef EStructuralFeature_ptr ptr_type;

	EStructuralFeature();
	virtual ~EStructuralFeature();

	// Typedefs
	typedef ::e4c::impl::attribute< EStructuralFeature__changeable_tag > _changeable_t;
	typedef ::e4c::impl::attribute< EStructuralFeature__volatile_tag > _volatile_t;
	typedef ::e4c::impl::attribute< EStructuralFeature__transient_tag > _transient_t;
	typedef ::e4c::impl::attribute< EStructuralFeature__defaultValueLiteral_tag > _defaultValueLiteral_t;
	typedef ::e4c::impl::attribute< EStructuralFeature__defaultValue_tag > _defaultValue_t;
	typedef ::e4c::impl::attribute< EStructuralFeature__unsettable_tag > _unsettable_t;
	typedef ::e4c::impl::attribute< EStructuralFeature__derived_tag > _derived_t;
	typedef ::e4c::impl::reference< EStructuralFeature__eContainingClass_tag > _eContainingClass_t;

	
	// Members
	_changeable_t changeable;
	_volatile_t volatile_;
	_transient_t transient;
	_defaultValueLiteral_t defaultValueLiteral;
	_defaultValue_t defaultValue;
	_unsettable_t unsettable;
	_derived_t derived;
	_eContainingClass_t eContainingClass;

};

} // ecore


#endif // EMF_CPP_ECORE_ESTRUCTURALFEATURE__HPP
