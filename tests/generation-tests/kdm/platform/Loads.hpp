
#ifndef EMF_CPP_KDM_PLATFORM_LOADS__HPP
#define EMF_CPP_KDM_PLATFORM_LOADS__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class Loads :  public virtual ::kdm::platform::AbstractPlatformRelationship
{
public:

	typedef Loads_ptr ptr_type;
	
	Loads();
	virtual ~Loads();

	typedef kdm::platform::DeployedComponent_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;
	
	to_t getTo() const;
	void setTo(to_t to_);
	from_t getFrom() const;
	void setFrom(from_t from_);
	

	/*PROTECTED REGION ID(kdm::platform::Loads public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class PlatformPackage;

	kdm::platform::DeployedComponent_ptr m_to;
	kdm::action::ActionElement_ptr m_from;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::platform::Loads protected) START*/
	/*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_LOADS__HPP
