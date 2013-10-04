
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


class ManagesResource :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

	typedef ManagesResource_ptr ptr_type;
	
	ManagesResource();
	virtual ~ManagesResource();

	typedef kdm::platform::ResourceType_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;
	
	to_t getTo() const;
	void setTo(to_t to_);
	from_t getFrom() const;
	void setFrom(from_t from_);
	

	/*PROTECTED REGION ID(kdm::platform::ManagesResource public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class PlatformPackage;

	kdm::platform::ResourceType_ptr m_to;
	kdm::action::ActionElement_ptr m_from;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::platform::ManagesResource protected) START*/
	/*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_MANAGESRESOURCE__HPP
