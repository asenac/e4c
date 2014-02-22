
#ifndef EMF_CPP_KDM_UI_UIFIELD__HPP
#define EMF_CPP_KDM_UI_UIFIELD__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/UIResource.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


class UIField :  public virtual ::kdm::ui::UIResource
{
public:

    typedef UIField_ptr ptr_type;

    UIField();
    virtual ~UIField();




    /*PROTECTED REGION ID(kdm::ui::UIField public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class UiPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::ui::UIField protected) START*/
    /*PROTECTED REGION END*/
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIFIELD__HPP
