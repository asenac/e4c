
#ifndef EMF_CPP_C_CFUNCTION__HPP
#define EMF_CPP_C_CFUNCTION__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/BehavioralFeature.hpp>

namespace C
{


// C::CFunction
class CFunction :  public virtual ::C::BehavioralFeature
{
public:

	typedef CFunction_ptr ptr_type;

	CFunction();
	virtual ~CFunction();

	// Typedefs
	typedef ::e4c::impl::attribute< CFunction__isVarArg_tag > _isVarArg_t;

	
	// Members
	_isVarArg_t isVarArg;

};

} // C


#endif // EMF_CPP_C_CFUNCTION__HPP
