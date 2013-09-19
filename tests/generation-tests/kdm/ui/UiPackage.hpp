#ifndef EMF_CPP_KDM_UI_PACKAGE_HPP
#define EMF_CPP_KDM_UI_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/ui/fwd.hpp>

namespace kdm
{
namespace ui
{


class UiPackage : public ::ecore::EPackage
{
public:
    static const UiPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_AbstractUIElement() const;
 	e4c::tag_t getTag_UIResource() const;
 	e4c::tag_t getTag_UIDisplay() const;
 	e4c::tag_t getTag_Screen() const;
 	e4c::tag_t getTag_Report() const;
 	e4c::tag_t getTag_UIModel() const;
 	e4c::tag_t getTag_AbstractUIRelationship() const;
 	e4c::tag_t getTag_UILayout() const;
 	e4c::tag_t getTag_UIField() const;
 	e4c::tag_t getTag_DisplaysImage() const;
 	e4c::tag_t getTag_Displays() const;
 	e4c::tag_t getTag_UIFlow() const;
 	e4c::tag_t getTag_UIElement() const;
 	e4c::tag_t getTag_UIRelationship() const;
 	e4c::tag_t getTag_UIAction() const;
 	e4c::tag_t getTag_UIEvent() const;
 	e4c::tag_t getTag_ReadsUI() const;
 	e4c::tag_t getTag_WritesUI() const;
 	e4c::tag_t getTag_ManagesUI() const;
 
 	// Structural features
 	e4c::tag_t getTag_AbstractUIElement__source() const;
 	e4c::tag_t getTag_AbstractUIElement__UIRelation() const;
 	e4c::tag_t getTag_AbstractUIElement__implementation() const;
 	e4c::tag_t getTag_AbstractUIElement__abstraction() const;
 	e4c::tag_t getTag_UIResource__UIElement() const;
 	e4c::tag_t getTag_UIModel__UIElement() const;
 	e4c::tag_t getTag_UILayout__to() const;
 	e4c::tag_t getTag_UILayout__from() const;
 	e4c::tag_t getTag_DisplaysImage__to() const;
 	e4c::tag_t getTag_DisplaysImage__from() const;
 	e4c::tag_t getTag_Displays__to() const;
 	e4c::tag_t getTag_Displays__from() const;
 	e4c::tag_t getTag_UIFlow__to() const;
 	e4c::tag_t getTag_UIFlow__from() const;
 	e4c::tag_t getTag_UIRelationship__to() const;
 	e4c::tag_t getTag_UIRelationship__from() const;
 	e4c::tag_t getTag_UIAction__kind() const;
 	e4c::tag_t getTag_UIAction__UIElement() const;
 	e4c::tag_t getTag_UIEvent__kind() const;
 	e4c::tag_t getTag_ReadsUI__to() const;
 	e4c::tag_t getTag_ReadsUI__from() const;
 	e4c::tag_t getTag_WritesUI__to() const;
 	e4c::tag_t getTag_WritesUI__from() const;
 	e4c::tag_t getTag_ManagesUI__to() const;
 	e4c::tag_t getTag_ManagesUI__from() const;

protected:
    UiPackage();
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_PACKAGE_HPP
