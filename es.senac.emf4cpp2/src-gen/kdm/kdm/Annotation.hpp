
#ifndef EMF_CPP_KDM_KDM_ANNOTATION__HPP
#define EMF_CPP_KDM_KDM_ANNOTATION__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/core/Element.hpp>


namespace kdm
{
namespace kdm
{


// kdm::kdm::Annotation
class Annotation :  public virtual ::kdm::core::Element
{
public:

	typedef Annotation_ptr ptr_type;

	Annotation();
	virtual ~Annotation();

	// Typedefs
	typedef ::e4c::impl::attribute< Annotation__text_tag > _text_t;

	
	// Members
	_text_t text;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_ANNOTATION__HPP
