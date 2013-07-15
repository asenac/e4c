
#ifndef EMF_CPP_KDM_ACTION_WRITES__HPP
#define EMF_CPP_KDM_ACTION_WRITES__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace action
{


// kdm::action::Writes
class Writes :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef Writes_ptr ptr_type;

	Writes();
	virtual ~Writes();

	// Typedefs
	typedef ::e4c::impl::reference< Writes__to_tag > _to_t;
	typedef ::e4c::impl::reference< Writes__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_WRITES__HPP
