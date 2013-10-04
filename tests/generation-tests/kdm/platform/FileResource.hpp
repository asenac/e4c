
#ifndef EMF_CPP_KDM_PLATFORM_FILERESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_FILERESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/ResourceType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class FileResource :  public virtual ::kdm::platform::ResourceType
{
public:

	typedef FileResource_ptr ptr_type;
	
	FileResource();
	virtual ~FileResource();

	
	

	/*PROTECTED REGION ID(kdm::platform::FileResource public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class PlatformPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::platform::FileResource protected) START*/
	/*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_FILERESOURCE__HPP
