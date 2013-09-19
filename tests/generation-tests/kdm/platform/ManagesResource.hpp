
#ifndef EMF_CPP_KDM_PLATFORM_MANAGESRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_MANAGESRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


// kdm::platform::ManagesResource
class ManagesResource :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ManagesResource_ptr ptr_type;
	
	ManagesResource();
	virtual ~ManagesResource();

	typedef kdm::platform::ResourceType_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_MANAGESRESOURCE__HPP
