
#ifndef EMF_CPP_KDM_UI_UIACTION__HPP
#define EMF_CPP_KDM_UI_UIACTION__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef ::kdm::core::String kind_t;
	typedef std::set < kdm::ui::UIEvent_ptr > UIElement_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;
	UIElement_t getUIElement() const;


	kind_t m_kind;
	std::set < std::unique_ptr < kdm::ui::UIEvent > > m_UIElement;

		
protected:

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIACTION__HPP
