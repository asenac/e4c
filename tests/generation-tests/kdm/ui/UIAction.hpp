
#ifndef EMF_CPP_KDM_UI_UIACTION__HPP
#define EMF_CPP_KDM_UI_UIACTION__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


class UIAction :  public virtual ::kdm::ui::AbstractUIElement
{
public:

    typedef UIAction_ptr ptr_type;

    UIAction();
    virtual ~UIAction();

    typedef ::kdm::core::String kind_t;
    typedef std::set < kdm::ui::UIEvent_ptr > UIElement_t;

    void setKind(kind_t _kind);
    kind_t getKind() const;
    UIElement_t getUIElement() const;
    void addUIElement(kdm::ui::UIEvent_ptr UIElement_);
    void addAllUIElement(const UIElement_t& UIElement_);


    /*PROTECTED REGION ID(kdm::ui::UIAction public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class UiPackage;

    kind_t m_kind;
    std::set < std::unique_ptr < kdm::ui::UIEvent > > m_UIElement;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::ui::UIAction protected) START*/
    /*PROTECTED REGION END*/
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_UIACTION__HPP
