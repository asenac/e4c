
#include "UIElement.hpp"
#include <kdm/ui/UiPackage.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::UIElement include) START*/
/*PROTECTED REGION END*/

UIElement::UIElement()
{
	/*PROTECTED REGION ID(UIElement constructor) START*/
	/*PROTECTED REGION END*/
}

UIElement::~UIElement()
{
	/*PROTECTED REGION ID(UIElement destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::ui::UIElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UIElement::eClassImpl() const
{
	return UiPackage::_instance()->getUIElement();
}
 
