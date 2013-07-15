
#ifndef EMF_CPP_KDM_ACTION_THROWS__HPP
#define EMF_CPP_KDM_ACTION_THROWS__HPP

#include <kdm/action/fwd.hpp>
#include <kdm/action/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace action
{


// kdm::action::Throws
class Throws :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef Throws_ptr ptr_type;

	Throws();
	virtual ~Throws();

	// Typedefs
	typedef ::e4c::impl::reference< Throws__to_tag > _to_t;
	typedef ::e4c::impl::reference< Throws__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // action
} // kdm


#endif // EMF_CPP_KDM_ACTION_THROWS__HPP
