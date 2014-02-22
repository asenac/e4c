
#ifndef EMF_CPP_KDM_UI_SCREEN__HPP
#define EMF_CPP_KDM_UI_SCREEN__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/UIDisplay.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


class Screen :  public virtual ::kdm::ui::UIDisplay
{
public:

    typedef Screen_ptr ptr_type;

    Screen();
    virtual ~Screen();




    /*PROTECTED REGION ID(kdm::ui::Screen public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class UiPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::ui::Screen protected) START*/
    /*PROTECTED REGION END*/
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_SCREEN__HPP
