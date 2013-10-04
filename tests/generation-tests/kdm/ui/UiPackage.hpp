#ifndef EMF_CPP_KDM_UI_PACKAGE_HPP
#define EMF_CPP_KDM_UI_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/ui/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace kdm
{
namespace ui
{


class UiPackage : public ::ecore::EPackage
{
public:
    static const UiPackage_ptr _instance();

 	::ecore::EClass_ptr getAbstractUIElement() const;
 	::ecore::EClass_ptr getUIResource() const;
 	::ecore::EClass_ptr getUIDisplay() const;
 	::ecore::EClass_ptr getScreen() const;
 	::ecore::EClass_ptr getReport() const;
 	::ecore::EClass_ptr getUIModel() const;
 	::ecore::EClass_ptr getAbstractUIRelationship() const;
 	::ecore::EClass_ptr getUILayout() const;
 	::ecore::EClass_ptr getUIField() const;
 	::ecore::EClass_ptr getDisplaysImage() const;
 	::ecore::EClass_ptr getDisplays() const;
 	::ecore::EClass_ptr getUIFlow() const;
 	::ecore::EClass_ptr getUIElement() const;
 	::ecore::EClass_ptr getUIRelationship() const;
 	::ecore::EClass_ptr getUIAction() const;
 	::ecore::EClass_ptr getUIEvent() const;
 	::ecore::EClass_ptr getReadsUI() const;
 	::ecore::EClass_ptr getWritesUI() const;
 	::ecore::EClass_ptr getManagesUI() const;
 	
 	::ecore::EReference_ptr getAbstractUIElement__source() const;
 	::ecore::EReference_ptr getAbstractUIElement__UIRelation() const;
 	::ecore::EReference_ptr getAbstractUIElement__implementation() const;
 	::ecore::EReference_ptr getAbstractUIElement__abstraction() const;
 	::ecore::EReference_ptr getUIResource__UIElement() const;
 	::ecore::EReference_ptr getUIModel__UIElement() const;
 	::ecore::EReference_ptr getUILayout__to() const;
 	::ecore::EReference_ptr getUILayout__from() const;
 	::ecore::EReference_ptr getDisplaysImage__to() const;
 	::ecore::EReference_ptr getDisplaysImage__from() const;
 	::ecore::EReference_ptr getDisplays__to() const;
 	::ecore::EReference_ptr getDisplays__from() const;
 	::ecore::EReference_ptr getUIFlow__to() const;
 	::ecore::EReference_ptr getUIFlow__from() const;
 	::ecore::EReference_ptr getUIRelationship__to() const;
 	::ecore::EReference_ptr getUIRelationship__from() const;
 	::ecore::EAttribute_ptr getUIAction__kind() const;
 	::ecore::EReference_ptr getUIAction__UIElement() const;
 	::ecore::EAttribute_ptr getUIEvent__kind() const;
 	::ecore::EReference_ptr getReadsUI__to() const;
 	::ecore::EReference_ptr getReadsUI__from() const;
 	::ecore::EReference_ptr getWritesUI__to() const;
 	::ecore::EReference_ptr getWritesUI__from() const;
 	::ecore::EReference_ptr getManagesUI__to() const;
 	::ecore::EReference_ptr getManagesUI__from() const;

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
    
 	::ecore::EClass_ptr m_AbstractUIElement;
 	::ecore::EClass_ptr m_UIResource;
 	::ecore::EClass_ptr m_UIDisplay;
 	::ecore::EClass_ptr m_Screen;
 	::ecore::EClass_ptr m_Report;
 	::ecore::EClass_ptr m_UIModel;
 	::ecore::EClass_ptr m_AbstractUIRelationship;
 	::ecore::EClass_ptr m_UILayout;
 	::ecore::EClass_ptr m_UIField;
 	::ecore::EClass_ptr m_DisplaysImage;
 	::ecore::EClass_ptr m_Displays;
 	::ecore::EClass_ptr m_UIFlow;
 	::ecore::EClass_ptr m_UIElement;
 	::ecore::EClass_ptr m_UIRelationship;
 	::ecore::EClass_ptr m_UIAction;
 	::ecore::EClass_ptr m_UIEvent;
 	::ecore::EClass_ptr m_ReadsUI;
 	::ecore::EClass_ptr m_WritesUI;
 	::ecore::EClass_ptr m_ManagesUI;
 	::ecore::EReference_ptr m_AbstractUIElement__source;
 	::ecore::EReference_ptr m_AbstractUIElement__UIRelation;
 	::ecore::EReference_ptr m_AbstractUIElement__implementation;
 	::ecore::EReference_ptr m_AbstractUIElement__abstraction;
 	::ecore::EReference_ptr m_UIResource__UIElement;
 	::ecore::EReference_ptr m_UIModel__UIElement;
 	::ecore::EReference_ptr m_UILayout__to;
 	::ecore::EReference_ptr m_UILayout__from;
 	::ecore::EReference_ptr m_DisplaysImage__to;
 	::ecore::EReference_ptr m_DisplaysImage__from;
 	::ecore::EReference_ptr m_Displays__to;
 	::ecore::EReference_ptr m_Displays__from;
 	::ecore::EReference_ptr m_UIFlow__to;
 	::ecore::EReference_ptr m_UIFlow__from;
 	::ecore::EReference_ptr m_UIRelationship__to;
 	::ecore::EReference_ptr m_UIRelationship__from;
 	::ecore::EAttribute_ptr m_UIAction__kind;
 	::ecore::EReference_ptr m_UIAction__UIElement;
 	::ecore::EAttribute_ptr m_UIEvent__kind;
 	::ecore::EReference_ptr m_ReadsUI__to;
 	::ecore::EReference_ptr m_ReadsUI__from;
 	::ecore::EReference_ptr m_WritesUI__to;
 	::ecore::EReference_ptr m_WritesUI__from;
 	::ecore::EReference_ptr m_ManagesUI__to;
 	::ecore::EReference_ptr m_ManagesUI__from;
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_PACKAGE_HPP
