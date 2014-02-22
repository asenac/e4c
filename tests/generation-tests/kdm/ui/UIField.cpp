
#include "UIField.hpp"
#include <kdm/ui/UiPackage.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::UIField include) START*/
/*PROTECTED REGION END*/

UIField::UIField()
{
    /*PROTECTED REGION ID(UIField constructor) START*/
    /*PROTECTED REGION END*/
}

UIField::~UIField()
{
    /*PROTECTED REGION ID(UIField destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::ui::UIField implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UIField::eClassImpl() const
{
    return UiPackage::_instance()->getUIField();
}

