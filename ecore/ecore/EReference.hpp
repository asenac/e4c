
#ifndef EMF_CPP_ECORE_EREFERENCE__HPP
#define EMF_CPP_ECORE_EREFERENCE__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EStructuralFeature.hpp>

namespace ecore
{


// ecore::EReference
class EReference :  public virtual ::ecore::EStructuralFeature
{
public:

	typedef EReference_ptr ptr_type;

	EReference();
	virtual ~EReference();

	// Typedefs
	typedef ::e4c::impl::attribute< EReference__containment_tag > _containment_t;
	typedef ::e4c::impl::attribute< EReference__container_tag > _container_t;
	typedef ::e4c::impl::attribute< EReference__resolveProxies_tag > _resolveProxies_t;
	typedef ::e4c::impl::reference< EReference__eOpposite_tag > _eOpposite_t;
	typedef ::e4c::impl::reference< EReference__eReferenceType_tag > _eReferenceType_t;
	typedef ::e4c::impl::reference< EReference__eKeys_tag > _eKeys_t;

	
	// Members
	_containment_t containment;
	_container_t container;
	_resolveProxies_t resolveProxies;
	_eOpposite_t eOpposite;
	_eReferenceType_t eReferenceType;
	_eKeys_t eKeys;

};

} // ecore


#endif // EMF_CPP_ECORE_EREFERENCE__HPP
