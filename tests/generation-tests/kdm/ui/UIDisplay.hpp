
#ifndef EMF_CPP_KDM_UI_UIDISPLAY__HPP
#define EMF_CPP_KDM_UI_UIDISPLAY__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/UIResource.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


class UIDisplay :  public virtual ::kdm::ui::UIResource
{
public:

    typedef UIDisplay_ptr ptr_type;

    UIDisplay();
    virtual ~UIDisplay();




    /*PROTECTED REGION ID(kdm::ui::UIDisplay public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class UiPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::ui::UIDisplay protected) START*/
    /*PROTECTED REGION END*/
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIDISPLAY__HPP
