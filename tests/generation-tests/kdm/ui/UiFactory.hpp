#ifndef EMF_CPP_KDM_UI_FACTORY_HPP
#define EMF_CPP_KDM_UI_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/ui/fwd.hpp>

namespace kdm
{
namespace ui
{


class UiFactory : public ::ecore::EFactory
{
public:

    static const UiFactory_ptr _instance();

    UIResource_ptr createUIResource() const;
    UIDisplay_ptr createUIDisplay() const;
    Screen_ptr createScreen() const;
    Report_ptr createReport() const;
    UIModel_ptr createUIModel() const;
    UILayout_ptr createUILayout() const;
    UIField_ptr createUIField() const;
    DisplaysImage_ptr createDisplaysImage() const;
    Displays_ptr createDisplays() const;
    UIFlow_ptr createUIFlow() const;
    UIElement_ptr createUIElement() const;
    UIRelationship_ptr createUIRelationship() const;
    UIAction_ptr createUIAction() const;
    UIEvent_ptr createUIEvent() const;
    ReadsUI_ptr createReadsUI() const;
    WritesUI_ptr createWritesUI() const;
    ManagesUI_ptr createManagesUI() const;

protected:

    UiFactory();
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_FACTORY_HPP
