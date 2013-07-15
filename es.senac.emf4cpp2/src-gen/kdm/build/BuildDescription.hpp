
#ifndef EMF_CPP_KDM_BUILD_BUILDDESCRIPTION__HPP
#define EMF_CPP_KDM_BUILD_BUILDDESCRIPTION__HPP

#include <kdm/build/fwd.hpp>
#include <kdm/build/meta.hpp>
#include <kdm/build/BuildResource.hpp>


namespace kdm
{
namespace build
{


// kdm::build::BuildDescription
class BuildDescription :  public virtual ::kdm::build::BuildResource
{
public:

	typedef BuildDescription_ptr ptr_type;

	BuildDescription();
	virtual ~BuildDescription();

	// Typedefs
	typedef ::e4c::impl::reference< BuildDescription__source_tag > _source_t;
	typedef ::e4c::impl::attribute< BuildDescription__text_tag > _text_t;

	
	// Members
	_source_t source;
	_text_t text;

};

} // build
} // kdm


#endif // EMF_CPP_KDM_BUILD_BUILDDESCRIPTION__HPP
