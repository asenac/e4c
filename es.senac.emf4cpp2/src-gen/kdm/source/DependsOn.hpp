
#ifndef EMF_CPP_KDM_SOURCE_DEPENDSON__HPP
#define EMF_CPP_KDM_SOURCE_DEPENDSON__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/AbstractInventoryRelationship.hpp>


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

	// Typedefs
	typedef ::e4c::impl::reference< DependsOn__to_tag > _to_t;
	typedef ::e4c::impl::reference< DependsOn__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_DEPENDSON__HPP
