
#ifndef EMF_CPP_KDM_PLATFORM_SPAWNS__HPP
#define EMF_CPP_KDM_PLATFORM_SPAWNS__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class Spawns :  public virtual ::kdm::platform::AbstractPlatformRelationship
{
public:

	typedef Spawns_ptr ptr_type;
	
	Spawns();
	virtual ~Spawns();

	typedef kdm::platform::RuntimeResource_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;
	
	to_t getTo() const;
	void setTo(to_t to_);
	from_t getFrom() const;
	void setFrom(from_t from_);
	

	/*PROTECTED REGION ID(kdm::platform::Spawns public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class PlatformPackage;

	kdm::platform::RuntimeResource_ptr m_to;
	kdm::action::ActionElement_ptr m_from;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::platform::Spawns protected) START*/
	/*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_SPAWNS__HPP
