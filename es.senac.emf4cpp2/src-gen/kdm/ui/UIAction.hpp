
#ifndef EMF_CPP_KDM_UI_UIACTION__HPP
#define EMF_CPP_KDM_UI_UIACTION__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIElement.hpp>


namespace kdm
{
namespace ui
{


// kdm::ui::UIAction
class UIAction :  public virtual ::kdm::ui::AbstractUIElement
{
public:

	typedef UIAction_ptr ptr_type;

	UIAction();
	virtual ~UIAction();

	// Typedefs
	typedef ::e4c::impl::attribute< UIAction__kind_tag > _kind_t;
	typedef ::e4c::impl::reference< UIAction__UIElement_tag > _UIElement_t;

	
	// Members
	_kind_t kind;
	_UIElement_t UIElement;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIACTION__HPP
