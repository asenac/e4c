
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

	typedef std::set < kdm::ui::AbstractUIElement_ptr > UIElement_t;

	
	UIElement_t getUIElement() const;


	std::set < std::unique_ptr < kdm::ui::AbstractUIElement > > m_UIElement;

		
protected:

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIRESOURCE__HPP
