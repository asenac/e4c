
#ifndef EMF_CPP_ECORE_ECLASSIFIER__HPP
#define EMF_CPP_ECORE_ECLASSIFIER__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ENamedElement.hpp>

namespace ecore
{


// ecore::EClassifier
class EClassifier :  public virtual ::ecore::ENamedElement
{
public:

	typedef EClassifier_ptr ptr_type;

	EClassifier();
	virtual ~EClassifier();

	// Typedefs
	typedef ::e4c::impl::attribute< EClassifier__instanceClassName_tag > _instanceClassName_t;
	typedef ::e4c::impl::attribute< EClassifier__instanceClass_tag > _instanceClass_t;
	typedef ::e4c::impl::attribute< EClassifier__defaultValue_tag > _defaultValue_t;
	typedef ::e4c::impl::attribute< EClassifier__instanceTypeName_tag > _instanceTypeName_t;
	typedef ::e4c::impl::reference< EClassifier__ePackage_tag > _ePackage_t;
	typedef ::e4c::impl::reference< EClassifier__eTypeParameters_tag > _eTypeParameters_t;

	
	// Members
	_instanceClassName_t instanceClassName;
	_instanceClass_t instanceClass;
	_defaultValue_t defaultValue;
	_instanceTypeName_t instanceTypeName;
	_ePackage_t ePackage;
	_eTypeParameters_t eTypeParameters;

};

} // ecore


#endif // EMF_CPP_ECORE_ECLASSIFIER__HPP
