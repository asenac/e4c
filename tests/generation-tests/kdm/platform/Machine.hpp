
#ifndef EMF_CPP_KDM_PLATFORM_MACHINE__HPP
#define EMF_CPP_KDM_PLATFORM_MACHINE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class Machine :  public virtual ::kdm::platform::AbstractPlatformElement
{
public:

	typedef Machine_ptr ptr_type;
	
	Machine();
	virtual ~Machine();

	typedef std::set < kdm::platform::DeployedComponent_ptr > deployedComponent_t;
	typedef std::set < kdm::platform::DeployedResource_ptr > deployedResource_t;
	
	deployedComponent_t getDeployedComponent() const;
	void addDeployedComponent(kdm::platform::DeployedComponent_ptr deployedComponent_);
	void addAllDeployedComponent(const deployedComponent_t& deployedComponent_);
	deployedResource_t getDeployedResource() const;
	void addDeployedResource(kdm::platform::DeployedResource_ptr deployedResource_);
	void addAllDeployedResource(const deployedResource_t& deployedResource_);
	

	/*PROTECTED REGION ID(kdm::platform::Machine public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class PlatformPackage;

	std::set < std::unique_ptr < kdm::platform::DeployedComponent > > m_deployedComponent;
	std::set < std::unique_ptr < kdm::platform::DeployedResource > > m_deployedResource;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::platform::Machine protected) START*/
	/*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_MACHINE__HPP
