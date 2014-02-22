
#include "Screen.hpp"
#include <kdm/ui/UiPackage.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::Screen include) START*/
/*PROTECTED REGION END*/

Screen::Screen()
{
    /*PROTECTED REGION ID(Screen constructor) START*/
    /*PROTECTED REGION END*/
}

Screen::~Screen()
{
    /*PROTECTED REGION ID(Screen destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::ui::Screen implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Screen::eClassImpl() const
{
    return UiPackage::_instance()->getScreen();
}

