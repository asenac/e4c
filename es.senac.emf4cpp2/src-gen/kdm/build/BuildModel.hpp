
#ifndef EMF_CPP_KDM_BUILD_BUILDMODEL__HPP
#define EMF_CPP_KDM_BUILD_BUILDMODEL__HPP

#include <kdm/build/fwd.hpp>
#include <kdm/build/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>


namespace kdm
{
namespace build
{


// kdm::build::BuildModel
class BuildModel :  public virtual ::kdm::kdm::KDMModel
{
public:

	typedef BuildModel_ptr ptr_type;

	BuildModel();
	virtual ~BuildModel();

	// Typedefs
	typedef ::e4c::impl::reference< BuildModel__buildElement_tag > _buildElement_t;

	
	// Members
	_buildElement_t buildElement;

};

} // build
} // kdm


#endif // EMF_CPP_KDM_BUILD_BUILDMODEL__HPP
