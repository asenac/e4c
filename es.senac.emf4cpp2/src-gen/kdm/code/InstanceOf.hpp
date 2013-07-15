
#ifndef EMF_CPP_KDM_CODE_INSTANCEOF__HPP
#define EMF_CPP_KDM_CODE_INSTANCEOF__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeRelationship.hpp>


namespace kdm
{
namespace code
{


// kdm::code::InstanceOf
class InstanceOf :  public virtual ::kdm::code::AbstractCodeRelationship
{
public:

	typedef InstanceOf_ptr ptr_type;

	InstanceOf();
	virtual ~InstanceOf();

	// Typedefs
	typedef ::e4c::impl::reference< InstanceOf__to_tag > _to_t;
	typedef ::e4c::impl::reference< InstanceOf__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_INSTANCEOF__HPP
