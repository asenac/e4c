
#ifndef EMF_CPP_KDM_PLATFORM_DEPLOYEDCOMPONENT__HPP
#define EMF_CPP_KDM_PLATFORM_DEPLOYEDCOMPONENT__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class DeployedComponent :  public virtual ::kdm::platform::AbstractPlatformElement
{
public:

	typedef DeployedComponent_ptr ptr_type;
	
	DeployedComponent();
	virtual ~DeployedComponent();

	typedef std::set < kdm::code::Module_ptr > groupedCode_t;
	
	groupedCode_t getGroupedCode() const;
	void addGroupedCode(kdm::code::Module_ptr groupedCode_);
	void addAllGroupedCode(const groupedCode_t& groupedCode_);
	

	/*PROTECTED REGION ID(kdm::platform::DeployedComponent public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class PlatformPackage;

	std::set < kdm::code::Module_ptr > m_groupedCode;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::platform::DeployedComponent protected) START*/
	/*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_DEPLOYEDCOMPONENT__HPP
