
#ifndef EMF_CPP_C_CPARAMETER__HPP
#define EMF_CPP_C_CPARAMETER__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CTypedElement.hpp>

namespace C
{


// C::CParameter
class CParameter :  public virtual ::C::CTypedElement
{
public:

	typedef CParameter_ptr ptr_type;

	CParameter();
	virtual ~CParameter();

	// Typedefs
	typedef ::e4c::impl::reference< CParameter__behavioralFeature_tag > _behavioralFeature_t;

	
	// Members
	_behavioralFeature_t behavioralFeature;

};

} // C


#endif // EMF_CPP_C_CPARAMETER__HPP
