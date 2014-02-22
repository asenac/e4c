
#ifndef EMF_CPP_KDM_UI_UIRESOURCE__HPP
#define EMF_CPP_KDM_UI_UIRESOURCE__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


class UIResource :  public virtual ::kdm::ui::AbstractUIElement
{
public:

    typedef UIResource_ptr ptr_type;

    UIResource();
    virtual ~UIResource();

    typedef std::set < kdm::ui::AbstractUIElement_ptr > UIElement_t;

    UIElement_t getUIElement() const;
    void addUIElement(kdm::ui::AbstractUIElement_ptr UIElement_);
    void addAllUIElement(const UIElement_t& UIElement_);


    /*PROTECTED REGION ID(kdm::ui::UIResource public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class UiPackage;

    std::set < std::unique_ptr < kdm::ui::AbstractUIElement > > m_UIElement;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::ui::UIResource protected) START*/
    /*PROTECTED REGION END*/
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIRESOURCE__HPP
