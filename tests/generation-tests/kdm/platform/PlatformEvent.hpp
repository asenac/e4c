
#ifndef EMF_CPP_KDM_PLATFORM_PLATFORMEVENT__HPP
#define EMF_CPP_KDM_PLATFORM_PLATFORMEVENT__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


class PlatformEvent :  public virtual ::kdm::platform::AbstractPlatformElement
{
public:

	typedef PlatformEvent_ptr ptr_type;
	
	PlatformEvent();
	virtual ~PlatformEvent();

	typedef ::kdm::core::String kind_t;
	
	void setKind(kind_t _kind);
	kind_t getKind() const;
	

	/*PROTECTED REGION ID(kdm::platform::PlatformEvent public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class PlatformPackage;

	kind_t m_kind;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::platform::PlatformEvent protected) START*/
	/*PROTECTED REGION END*/
};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_PLATFORMEVENT__HPP
