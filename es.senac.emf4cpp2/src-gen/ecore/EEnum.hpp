
#ifndef EMF_CPP_ECORE_EENUM__HPP
#define EMF_CPP_ECORE_EENUM__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EDataType.hpp>

namespace ecore
{


// ecore::EEnum
class EEnum :  public virtual ::ecore::EDataType
{
public:

	typedef EEnum_ptr ptr_type;

	EEnum();
	virtual ~EEnum();

	// Typedefs
	typedef ::e4c::impl::reference< EEnum__eLiterals_tag > _eLiterals_t;

	
	// Members
	_eLiterals_t eLiterals;

};

} // ecore


#endif // EMF_CPP_ECORE_EENUM__HPP
