
#ifndef EMF_CPP_KDM_PLATFORM_BINDSTO__HPP
#define EMF_CPP_KDM_PLATFORM_BINDSTO__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


// kdm::platform::BindsTo
class BindsTo :  public virtual ::kdm::platform::AbstractPlatformRelationship
{
public:

	typedef BindsTo_ptr ptr_type;
	
	BindsTo();
	virtual ~BindsTo();

	typedef kdm::platform::ResourceType_ptr to_t;
	typedef kdm::platform::ResourceType_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::platform::ResourceType_ptr m_to;
	kdm::platform::ResourceType_ptr m_from;

		
protected:

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_BINDSTO__HPP
