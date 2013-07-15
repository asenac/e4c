
#ifndef EMF_CPP_KDM_KDM_TAGDEFINITION__HPP
#define EMF_CPP_KDM_KDM_TAGDEFINITION__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/core/Element.hpp>


namespace kdm
{
namespace kdm
{


// kdm::kdm::TagDefinition
class TagDefinition :  public virtual ::kdm::core::Element
{
public:

	typedef TagDefinition_ptr ptr_type;

	TagDefinition();
	virtual ~TagDefinition();

	// Typedefs
	typedef ::e4c::impl::attribute< TagDefinition__tag_tag > _tag_t;
	typedef ::e4c::impl::attribute< TagDefinition__type_tag > _type_t;

	
	// Members
	_tag_t tag;
	_type_t type;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_TAGDEFINITION__HPP
