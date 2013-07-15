
#ifndef EMF_CPP_KDM_CODE_PARAMETERTO__HPP
#define EMF_CPP_KDM_CODE_PARAMETERTO__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>


namespace kdm
{
namespace code
{


// kdm::code::ParameterTo
class ParameterTo :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef ParameterTo_ptr ptr_type;

	ParameterTo();
	virtual ~ParameterTo();

	// Typedefs
	typedef ::e4c::impl::reference< ParameterTo__to_tag > _to_t;
	typedef ::e4c::impl::reference< ParameterTo__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_PARAMETERTO__HPP
