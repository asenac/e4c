
#ifndef EMF_CPP_KDM_CODE_COMMENTUNIT__HPP
#define EMF_CPP_KDM_CODE_COMMENTUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/core/ModelElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef int text_t;

	
	void setText(text_t _text);
	text_t getText() const;

	
protected:

	text_t m_text;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_COMMENTUNIT__HPP
