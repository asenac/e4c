
#ifndef EMF_CPP_KDM_ACTION_READS__HPP
#define EMF_CPP_KDM_ACTION_READS__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace action
{


// kdm::action::Reads
class Reads :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef Reads_ptr ptr_type;

	Reads();
	virtual ~Reads();

	// Typedefs
	typedef ::e4c::impl::reference< Reads__to_tag > _to_t;
	typedef ::e4c::impl::reference< Reads__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_READS__HPP
