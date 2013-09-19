
#ifndef EMF_CPP_KDM_SOURCE_DEPENDSON__HPP
#define EMF_CPP_KDM_SOURCE_DEPENDSON__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/AbstractInventoryRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace source
{


// kdm::source::DependsOn
class DependsOn :  public virtual ::kdm::source::AbstractInventoryRelationship
{
public:

	typedef DependsOn_ptr ptr_type;
	
	DependsOn();
	virtual ~DependsOn();

	typedef kdm::source::AbstractInventoryElement_ptr to_t;
	typedef kdm::source::AbstractInventoryElement_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_DEPENDSON__HPP
