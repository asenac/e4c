
#ifndef EMF_CPP_KDM_UI_FWD_HPP
#define EMF_CPP_KDM_UI_FWD_HPP

#include <emf4cpp2/emf4cpp2.hpp>


namespace kdm
{
namespace ui
{


class UiPackage;
typedef UiPackage * UiPackage_ptr;
class UiFactory;
typedef UiFactory * UiFactory_ptr;

// Data types


// Classes
class AbstractUIElement;
typedef AbstractUIElement* AbstractUIElement_ptr;
class UIResource;
typedef UIResource* UIResource_ptr;
class UIDisplay;
typedef UIDisplay* UIDisplay_ptr;
class Screen;
typedef Screen* Screen_ptr;
class Report;
typedef Report* Report_ptr;
class UIModel;
typedef UIModel* UIModel_ptr;
class AbstractUIRelationship;
typedef AbstractUIRelationship* AbstractUIRelationship_ptr;
class UILayout;
typedef UILayout* UILayout_ptr;
class UIField;
typedef UIField* UIField_ptr;
class DisplaysImage;
typedef DisplaysImage* DisplaysImage_ptr;
class Displays;
typedef Displays* Displays_ptr;
class UIFlow;
typedef UIFlow* UIFlow_ptr;
class UIElement;
typedef UIElement* UIElement_ptr;
class UIRelationship;
typedef UIRelationship* UIRelationship_ptr;
class UIAction;
typedef UIAction* UIAction_ptr;
class UIEvent;
typedef UIEvent* UIEvent_ptr;
class ReadsUI;
typedef ReadsUI* ReadsUI_ptr;
class WritesUI;
typedef WritesUI* WritesUI_ptr;
class ManagesUI;
typedef ManagesUI* ManagesUI_ptr;


// Structural features
struct AbstractUIElement__source_tag;
struct AbstractUIElement__UIRelation_tag;
struct AbstractUIElement__implementation_tag;
struct AbstractUIElement__abstraction_tag;
struct UIResource__UIElement_tag;
struct UIModel__UIElement_tag;
struct UILayout__to_tag;
struct UILayout__from_tag;
struct DisplaysImage__to_tag;
struct DisplaysImage__from_tag;
struct Displays__to_tag;
struct Displays__from_tag;
struct UIFlow__to_tag;
struct UIFlow__from_tag;
struct UIRelationship__to_tag;
struct UIRelationship__from_tag;
struct UIAction__kind_tag;
struct UIAction__UIElement_tag;
struct UIEvent__kind_tag;
struct ReadsUI__to_tag;
struct ReadsUI__from_tag;
struct WritesUI__to_tag;
struct WritesUI__from_tag;
struct ManagesUI__to_tag;
struct ManagesUI__from_tag;


} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_FWD_HPP
