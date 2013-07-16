
#ifndef EMF_CPP_ECORE_ETYPEPARAMETER__HPP
#define EMF_CPP_ECORE_ETYPEPARAMETER__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ENamedElement.hpp>

namespace ecore
{


// ecore::ETypeParameter
class ETypeParameter :  public virtual ::ecore::ENamedElement
{
public:

	typedef ETypeParameter_ptr ptr_type;

	ETypeParameter();
	virtual ~ETypeParameter();

	// Typedefs
	typedef ::e4c::impl::reference< ETypeParameter__eBounds_tag > _eBounds_t;

	
	// Members
	_eBounds_t eBounds;

};

} // ecore


#endif // EMF_CPP_ECORE_ETYPEPARAMETER__HPP
