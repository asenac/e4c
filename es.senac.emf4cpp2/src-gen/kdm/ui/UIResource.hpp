
#ifndef EMF_CPP_KDM_UI_UIRESOURCE__HPP
#define EMF_CPP_KDM_UI_UIRESOURCE__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIElement.hpp>


namespace kdm
{
namespace ui
{


// kdm::ui::UIResource
class UIResource :  public virtual ::kdm::ui::AbstractUIElement
{
public:

	typedef UIResource_ptr ptr_type;

	UIResource();
	virtual ~UIResource();

	// Typedefs
	typedef ::e4c::impl::reference< UIResource__UIElement_tag > _UIElement_t;

	
	// Members
	_UIElement_t UIElement;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIRESOURCE__HPP
