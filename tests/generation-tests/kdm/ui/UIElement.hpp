
#ifndef EMF_CPP_KDM_UI_UIELEMENT__HPP
#define EMF_CPP_KDM_UI_UIELEMENT__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


class UIElement :  public virtual ::kdm::ui::AbstractUIElement
{
public:

	typedef UIElement_ptr ptr_type;
	
	UIElement();
	virtual ~UIElement();

	
	

	/*PROTECTED REGION ID(kdm::ui::UIElement public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class UiPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::ui::UIElement protected) START*/
	/*PROTECTED REGION END*/
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIELEMENT__HPP
