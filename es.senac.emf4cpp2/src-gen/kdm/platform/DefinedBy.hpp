
#ifndef EMF_CPP_KDM_PLATFORM_DEFINEDBY__HPP
#define EMF_CPP_KDM_PLATFORM_DEFINEDBY__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::DefinedBy
class DefinedBy :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef DefinedBy_ptr ptr_type;

	DefinedBy();
	virtual ~DefinedBy();

	// Typedefs
	typedef ::e4c::impl::reference< DefinedBy__to_tag > _to_t;
	typedef ::e4c::impl::reference< DefinedBy__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_DEFINEDBY__HPP
