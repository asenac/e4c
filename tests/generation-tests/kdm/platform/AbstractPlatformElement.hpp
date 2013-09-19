
#ifndef EMF_CPP_KDM_PLATFORM_ABSTRACTPLATFORMELEMENT__HPP
#define EMF_CPP_KDM_PLATFORM_ABSTRACTPLATFORMELEMENT__HPP

#include <kdm/platform/fwd.hpp>
#include <kdm/platform/meta.hpp>
#include <kdm/core/KDMEntity.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace platform
{


// kdm::platform::AbstractPlatformElement
class AbstractPlatformElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractPlatformElement_ptr ptr_type;
	
	virtual ~AbstractPlatformElement();

	typedef boost::ptr_set < kdm::source::SourceRef > source_t;
	typedef boost::ptr_set < kdm::platform::AbstractPlatformRelationship > relation_t;
	typedef boost::ptr_vector < kdm::action::ActionElement > abstraction_t;
	typedef std::vector < kdm::code::AbstractCodeElement_ptr > implementation_t;

	
	// TODO
	// TODO
	// TODO
	// TODO

	
protected:
	AbstractPlatformElement();

	source_t m_source;
	relation_t m_relation;
	abstraction_t m_abstraction;
	implementation_t m_implementation;

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_ABSTRACTPLATFORMELEMENT__HPP
