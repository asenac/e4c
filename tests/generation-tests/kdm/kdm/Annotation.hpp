
#ifndef EMF_CPP_KDM_KDM_ANNOTATION__HPP
#define EMF_CPP_KDM_KDM_ANNOTATION__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/core/Element.hpp>

#include <e4c/mapping.hpp>

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

	typedef int text_t;

	
	void setText(text_t _text);
	text_t getText() const;

	
protected:

	text_t m_text;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_ANNOTATION__HPP
