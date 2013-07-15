
#ifndef EMF_CPP_KDM_BUILD_ABSTRACTBUILDELEMENT__HPP
#define EMF_CPP_KDM_BUILD_ABSTRACTBUILDELEMENT__HPP

#include <kdm/build/fwd.hpp>
#include <kdm/build/meta.hpp>
#include <kdm/core/KDMEntity.hpp>


namespace kdm
{
namespace build
{


// kdm::build::AbstractBuildElement
class AbstractBuildElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractBuildElement_ptr ptr_type;

	AbstractBuildElement();
	virtual ~AbstractBuildElement();

	// Typedefs
	typedef ::e4c::impl::reference< AbstractBuildElement__buildRelation_tag > _buildRelation_t;

	
	// Members
	_buildRelation_t buildRelation;

};

} // build
} // kdm


#endif // EMF_CPP_KDM_BUILD_ABSTRACTBUILDELEMENT__HPP
