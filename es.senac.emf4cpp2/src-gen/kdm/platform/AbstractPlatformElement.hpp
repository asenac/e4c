
#ifndef EMF_CPP_KDM_PLATFORM_ABSTRACTPLATFORMELEMENT__HPP
#define EMF_CPP_KDM_PLATFORM_ABSTRACTPLATFORMELEMENT__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/core/KDMEntity.hpp>


namespace kdm
{
namespace platform
{


// kdm::platform::AbstractPlatformElement
class AbstractPlatformElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractPlatformElement_ptr ptr_type;

	AbstractPlatformElement();
	virtual ~AbstractPlatformElement();

	// Typedefs
	typedef ::e4c::impl::reference< AbstractPlatformElement__source_tag > _source_t;
	typedef ::e4c::impl::reference< AbstractPlatformElement__relation_tag > _relation_t;
	typedef ::e4c::impl::reference< AbstractPlatformElement__abstraction_tag > _abstraction_t;
	typedef ::e4c::impl::reference< AbstractPlatformElement__implementation_tag > _implementation_t;

	
	// Members
	_source_t source;
	_relation_t relation;
	_abstraction_t abstraction;
	_implementation_t implementation;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_ABSTRACTPLATFORMELEMENT__HPP
