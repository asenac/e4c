
#ifndef EMF_CPP_KDM_UI_DISPLAYSIMAGE__HPP
#define EMF_CPP_KDM_UI_DISPLAYSIMAGE__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


// kdm::ui::DisplaysImage
class DisplaysImage :  public virtual ::kdm::ui::AbstractUIRelationship
{
public:

	typedef DisplaysImage_ptr ptr_type;
	
	DisplaysImage();
	virtual ~DisplaysImage();

	typedef kdm::source::Image_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_DISPLAYSIMAGE__HPP
