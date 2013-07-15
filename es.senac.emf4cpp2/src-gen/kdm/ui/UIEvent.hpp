
#ifndef EMF_CPP_KDM_UI_UIEVENT__HPP
#define EMF_CPP_KDM_UI_UIEVENT__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIElement.hpp>


namespace kdm
{
namespace ui
{


// kdm::ui::UIEvent
class UIEvent :  public virtual ::kdm::ui::AbstractUIElement
{
public:

	typedef UIEvent_ptr ptr_type;

	UIEvent();
	virtual ~UIEvent();

	// Typedefs
	typedef ::e4c::impl::attribute< UIEvent__kind_tag > _kind_t;

	
	// Members
	_kind_t kind;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIEVENT__HPP
