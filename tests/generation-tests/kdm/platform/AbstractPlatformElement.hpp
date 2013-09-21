
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

	typedef std::set < kdm::source::SourceRef_ptr > source_t;
	typedef std::set < kdm::platform::AbstractPlatformRelationship_ptr > relation_t;
	typedef std::vector < kdm::action::ActionElement_ptr > abstraction_t;
	typedef std::set < kdm::code::AbstractCodeElement_ptr > implementation_t;

	
	source_t getSource() const;
	relation_t getRelation() const;
	abstraction_t getAbstraction() const;
	implementation_t getImplementation() const;


	std::set < std::unique_ptr < kdm::source::SourceRef > > m_source;
	std::set < std::unique_ptr < kdm::platform::AbstractPlatformRelationship > > m_relation;
	std::vector < std::unique_ptr < kdm::action::ActionElement > > m_abstraction;
	std::set < kdm::code::AbstractCodeElement_ptr > m_implementation;

		
protected:
	AbstractPlatformElement();

};

} // platform
} // kdm


#endif // EMF_CPP_KDM_PLATFORM_ABSTRACTPLATFORMELEMENT__HPP
