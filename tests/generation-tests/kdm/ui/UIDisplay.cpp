
#include "UIDisplay.hpp"
#include <kdm/ui/UiPackage.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::UIDisplay include) START*/
/*PROTECTED REGION END*/

UIDisplay::UIDisplay()
{
	/*PROTECTED REGION ID(UIDisplay constructor) START*/
	/*PROTECTED REGION END*/
}

UIDisplay::~UIDisplay()
{
	/*PROTECTED REGION ID(UIDisplay destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::ui::UIDisplay implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UIDisplay::eClassImpl() const
{
	return UiPackage::_instance()->getUIDisplay();
}
 
