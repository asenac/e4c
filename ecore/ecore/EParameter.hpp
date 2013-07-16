
#ifndef EMF_CPP_ECORE_EPARAMETER__HPP
#define EMF_CPP_ECORE_EPARAMETER__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ETypedElement.hpp>

namespace ecore
{


// ecore::EParameter
class EParameter :  public virtual ::ecore::ETypedElement
{
public:

	typedef EParameter_ptr ptr_type;

	EParameter();
	virtual ~EParameter();

	// Typedefs
	typedef ::e4c::impl::reference< EParameter__eOperation_tag > _eOperation_t;

	
	// Members
	_eOperation_t eOperation;

};

} // ecore


#endif // EMF_CPP_ECORE_EPARAMETER__HPP
