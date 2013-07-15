
#ifndef EMF_CPP_KDM_CODE_INTERFACEUNIT__HPP
#define EMF_CPP_KDM_CODE_INTERFACEUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>


namespace kdm
{
namespace code
{


// kdm::code::InterfaceUnit
class InterfaceUnit :  public virtual ::kdm::code::Datatype
{
public:

	typedef InterfaceUnit_ptr ptr_type;

	InterfaceUnit();
	virtual ~InterfaceUnit();

	// Typedefs
	typedef ::e4c::impl::reference< InterfaceUnit__codeElement_tag > _codeElement_t;

	
	// Members
	_codeElement_t codeElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_INTERFACEUNIT__HPP
