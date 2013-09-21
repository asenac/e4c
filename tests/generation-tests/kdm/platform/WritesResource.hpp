
#ifndef EMF_CPP_KDM_PLATFORM_WRITESRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_WRITESRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


// kdm::platform::WritesResource
class WritesResource :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef WritesResource_ptr ptr_type;
	
	WritesResource();
	virtual ~WritesResource();

	typedef kdm::platform::ResourceType_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::platform::ResourceType_ptr m_to;
	kdm::action::ActionElement_ptr m_from;

		
protected:

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_WRITESRESOURCE__HPP
