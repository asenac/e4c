
#ifndef EMF_CPP_KDM_UI_UIMODEL__HPP
#define EMF_CPP_KDM_UI_UIMODEL__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/kdm/KDMModel.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


class UIModel :  public virtual ::kdm::kdm::KDMModel
{
public:

    typedef UIModel_ptr ptr_type;

    UIModel();
    virtual ~UIModel();

    typedef std::set < kdm::ui::AbstractUIElement_ptr > UIElement_t;

    UIElement_t getUIElement() const;
    void addUIElement(kdm::ui::AbstractUIElement_ptr UIElement_);
    void addAllUIElement(const UIElement_t& UIElement_);


    /*PROTECTED REGION ID(kdm::ui::UIModel public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class UiPackage;

    std::set < std::unique_ptr < kdm::ui::AbstractUIElement > > m_UIElement;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::ui::UIModel protected) START*/
    /*PROTECTED REGION END*/
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIMODEL__HPP
