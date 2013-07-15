
#ifndef EMF_CPP_KDM_CODE_METHODUNIT__HPP
#define EMF_CPP_KDM_CODE_METHODUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/ControlElement.hpp>


namespace kdm
{
namespace code
{


// kdm::code::MethodUnit
class MethodUnit :  public virtual ::kdm::code::ControlElement
{
public:

	typedef MethodUnit_ptr ptr_type;

	MethodUnit();
	virtual ~MethodUnit();

	// Typedefs
	typedef ::e4c::impl::attribute< MethodUnit__kind_tag > _kind_t;
	typedef ::e4c::impl::attribute< MethodUnit__export_tag > _export_t;

	
	// Members
	_kind_t kind;
	_export_t export_;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_METHODUNIT__HPP
