
#ifndef EMF_CPP_KDM_CODE_COMMENTUNIT__HPP
#define EMF_CPP_KDM_CODE_COMMENTUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/core/ModelElement.hpp>


namespace kdm
{
namespace code
{


// kdm::code::CommentUnit
class CommentUnit :  public virtual ::kdm::core::ModelElement
{
public:

	typedef CommentUnit_ptr ptr_type;

	CommentUnit();
	virtual ~CommentUnit();

	// Typedefs
	typedef ::e4c::impl::attribute< CommentUnit__text_tag > _text_t;

	
	// Members
	_text_t text;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_COMMENTUNIT__HPP
