#ifndef EMF_CPP_KDM_UI_PACKAGE_HPP
#define EMF_CPP_KDM_UI_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/ui/fwd.hpp>

namespace kdm
{
namespace ui
{


class UiPackage : public ::ecore::EPackage
{
public:
    static UiPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_AbstractUIElement();
 	e4c::tag_t getTag_UIResource();
 	e4c::tag_t getTag_UIDisplay();
 	e4c::tag_t getTag_Screen();
 	e4c::tag_t getTag_Report();
 	e4c::tag_t getTag_UIModel();
 	e4c::tag_t getTag_AbstractUIRelationship();
 	e4c::tag_t getTag_UILayout();
 	e4c::tag_t getTag_UIField();
 	e4c::tag_t getTag_DisplaysImage();
 	e4c::tag_t getTag_Displays();
 	e4c::tag_t getTag_UIFlow();
 	e4c::tag_t getTag_UIElement();
 	e4c::tag_t getTag_UIRelationship();
 	e4c::tag_t getTag_UIAction();
 	e4c::tag_t getTag_UIEvent();
 	e4c::tag_t getTag_ReadsUI();
 	e4c::tag_t getTag_WritesUI();
 	e4c::tag_t getTag_ManagesUI();
 
 	// Structural features
 	e4c::tag_t getTag_AbstractUIElement__source();
 	e4c::tag_t getTag_AbstractUIElement__UIRelation();
 	e4c::tag_t getTag_AbstractUIElement__implementation();
 	e4c::tag_t getTag_AbstractUIElement__abstraction();
 	e4c::tag_t getTag_UIResource__UIElement();
 	e4c::tag_t getTag_UIModel__UIElement();
 	e4c::tag_t getTag_UILayout__to();
 	e4c::tag_t getTag_UILayout__from();
 	e4c::tag_t getTag_DisplaysImage__to();
 	e4c::tag_t getTag_DisplaysImage__from();
 	e4c::tag_t getTag_Displays__to();
 	e4c::tag_t getTag_Displays__from();
 	e4c::tag_t getTag_UIFlow__to();
 	e4c::tag_t getTag_UIFlow__from();
 	e4c::tag_t getTag_UIRelationship__to();
 	e4c::tag_t getTag_UIRelationship__from();
 	e4c::tag_t getTag_UIAction__kind();
 	e4c::tag_t getTag_UIAction__UIElement();
 	e4c::tag_t getTag_UIEvent__kind();
 	e4c::tag_t getTag_ReadsUI__to();
 	e4c::tag_t getTag_ReadsUI__from();
 	e4c::tag_t getTag_WritesUI__to();
 	e4c::tag_t getTag_WritesUI__from();
 	e4c::tag_t getTag_ManagesUI__to();
 	e4c::tag_t getTag_ManagesUI__from();

protected:
    UiPackage();
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_PACKAGE_HPP
