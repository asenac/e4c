
#ifndef EMF_CPP_KDM_BUILD_ABSTRACTBUILDRELATIONSHIP__HPP
#define EMF_CPP_KDM_BUILD_ABSTRACTBUILDRELATIONSHIP__HPP

#include <kdm/build/fwd.hpp>
#include <kdm/build/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>


namespace kdm
{
namespace build
{


// kdm::build::AbstractBuildRelationship
class AbstractBuildRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

	typedef AbstractBuildRelationship_ptr ptr_type;

	AbstractBuildRelationship();
	virtual ~AbstractBuildRelationship();

	// Typedefs
	
	
	// Members
	
};

} // build
} // kdm


#endif // EMF_CPP_KDM_BUILD_ABSTRACTBUILDRELATIONSHIP__HPP
