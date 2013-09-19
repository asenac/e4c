
#ifndef EMF_CPP_KDM_UI_UIEVENT__HPP
#define EMF_CPP_KDM_UI_UIEVENT__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIElement.hpp>

#include <e4c/mapping.hpp>

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

	typedef int kind_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;

	
protected:

	kind_t m_kind;

};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIEVENT__HPP
