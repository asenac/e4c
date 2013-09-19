
#ifndef EMF_CPP_KDM_UI_UIRESOURCE__HPP
#define EMF_CPP_KDM_UI_UIRESOURCE__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef boost::ptr_set < kdm::ui::AbstractUIElement > UIElement_t;

	
	// TODO

	
protected:

	UIElement_t m_UIElement;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIRESOURCE__HPP
