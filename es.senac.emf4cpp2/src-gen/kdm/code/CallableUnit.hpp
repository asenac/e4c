
#ifndef EMF_CPP_KDM_CODE_CALLABLEUNIT__HPP
#define EMF_CPP_KDM_CODE_CALLABLEUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/ControlElement.hpp>


namespace kdm
{
namespace code
{


// kdm::code::CallableUnit
class CallableUnit :  public virtual ::kdm::code::ControlElement
{
public:

	typedef CallableUnit_ptr ptr_type;

	CallableUnit();
	virtual ~CallableUnit();

	// Typedefs
	typedef ::e4c::impl::attribute< CallableUnit__kind_tag > _kind_t;

	
	// Members
	_kind_t kind;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_CALLABLEUNIT__HPP
