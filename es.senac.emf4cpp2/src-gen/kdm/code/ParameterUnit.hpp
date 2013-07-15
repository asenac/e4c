
#ifndef EMF_CPP_KDM_CODE_PARAMETERUNIT__HPP
#define EMF_CPP_KDM_CODE_PARAMETERUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DataElement.hpp>


namespace kdm
{
namespace code
{


// kdm::code::ParameterUnit
class ParameterUnit :  public virtual ::kdm::code::DataElement
{
public:

	typedef ParameterUnit_ptr ptr_type;

	ParameterUnit();
	virtual ~ParameterUnit();

	// Typedefs
	typedef ::e4c::impl::attribute< ParameterUnit__kind_tag > _kind_t;
	typedef ::e4c::impl::attribute< ParameterUnit__pos_tag > _pos_t;

	
	// Members
	_kind_t kind;
	_pos_t pos;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_PARAMETERUNIT__HPP
