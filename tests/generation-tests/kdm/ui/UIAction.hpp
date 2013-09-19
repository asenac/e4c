
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

	typedef int kind_t;
	typedef boost::ptr_set < kdm::ui::UIEvent > UIElement_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;
	// TODO

	
protected:

	kind_t m_kind;
	UIElement_t m_UIElement;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIACTION__HPP
