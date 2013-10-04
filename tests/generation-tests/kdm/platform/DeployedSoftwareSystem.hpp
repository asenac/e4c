
#ifndef EMF_CPP_KDM_PLATFORM_DEPLOYEDSOFTWARESYSTEM__HPP
#define EMF_CPP_KDM_PLATFORM_DEPLOYEDSOFTWARESYSTEM__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class DeployedSoftwareSystem :  public virtual ::kdm::platform::AbstractPlatformElement
{
public:

	typedef DeployedSoftwareSystem_ptr ptr_type;
	
	DeployedSoftwareSystem();
	virtual ~DeployedSoftwareSystem();

	typedef std::set < kdm::platform::DeployedComponent_ptr > groupedComponent_t;
	
	groupedComponent_t getGroupedComponent() const;
	void addGroupedComponent(kdm::platform::DeployedComponent_ptr groupedComponent_);
	void addAllGroupedComponent(const groupedComponent_t& groupedComponent_);
	

	/*PROTECTED REGION ID(kdm::platform::DeployedSoftwareSystem public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class PlatformPackage;

	std::set < kdm::platform::DeployedComponent_ptr > m_groupedComponent;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::platform::DeployedSoftwareSystem protected) START*/
	/*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_DEPLOYEDSOFTWARESYSTEM__HPP
