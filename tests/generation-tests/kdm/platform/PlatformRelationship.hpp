
#ifndef EMF_CPP_KDM_PLATFORM_PLATFORMRELATIONSHIP__HPP
#define EMF_CPP_KDM_PLATFORM_PLATFORMRELATIONSHIP__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class PlatformRelationship :  public virtual ::kdm::platform::AbstractPlatformRelationship
{
public:

	typedef PlatformRelationship_ptr ptr_type;
	
	PlatformRelationship();
	virtual ~PlatformRelationship();

	typedef kdm::core::KDMEntity_ptr to_t;
	typedef kdm::platform::AbstractPlatformElement_ptr from_t;
	
	to_t getTo() const;
	void setTo(to_t to_);
	from_t getFrom() const;
	void setFrom(from_t from_);
	

	/*PROTECTED REGION ID(kdm::platform::PlatformRelationship public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class PlatformPackage;

	kdm::core::KDMEntity_ptr m_to;
	kdm::platform::AbstractPlatformElement_ptr m_from;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::platform::PlatformRelationship protected) START*/
	/*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PLATFORMRELATIONSHIP__HPP
