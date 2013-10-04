
#ifndef EMF_CPP_KDM_PLATFORM_STREAMRESOURCE__HPP
#define EMF_CPP_KDM_PLATFORM_STREAMRESOURCE__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/ResourceType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class StreamResource :  public virtual ::kdm::platform::ResourceType
{
public:

	typedef StreamResource_ptr ptr_type;
	
	StreamResource();
	virtual ~StreamResource();

	
	

	/*PROTECTED REGION ID(kdm::platform::StreamResource public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class PlatformPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::platform::StreamResource protected) START*/
	/*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_STREAMRESOURCE__HPP
