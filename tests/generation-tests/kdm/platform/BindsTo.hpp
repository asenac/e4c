
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


class BindsTo :  public virtual ::kdm::platform::AbstractPlatformRelationship
{
public:

	typedef BindsTo_ptr ptr_type;
	
	BindsTo();
	virtual ~BindsTo();

	typedef kdm::platform::ResourceType_ptr to_t;
	typedef kdm::platform::ResourceType_ptr from_t;
	
	to_t getTo() const;
	void setTo(to_t to_);
	from_t getFrom() const;
	void setFrom(from_t from_);
	

	/*PROTECTED REGION ID(kdm::platform::BindsTo public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class PlatformPackage;

	kdm::platform::ResourceType_ptr m_to;
	kdm::platform::ResourceType_ptr m_from;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::platform::BindsTo protected) START*/
	/*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_BINDSTO__HPP
