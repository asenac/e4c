#include "UiPackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace kdm::ui;

UiPackage::UiPackage()
{
}

UiPackage_ptr UiPackage::_instance()
{
	static UiPackage __instance;
	return &__instance;
}

e4c::tag_t UiPackage::getTag_AbstractUIElement()
{
	return e4c::tag< AbstractUIElement >::get();
}
 
e4c::tag_t UiPackage::getTag_UIResource()
{
	return e4c::tag< UIResource >::get();
}
 
e4c::tag_t UiPackage::getTag_UIDisplay()
{
	return e4c::tag< UIDisplay >::get();
}
 
e4c::tag_t UiPackage::getTag_Screen()
{
	return e4c::tag< Screen >::get();
}
 
e4c::tag_t UiPackage::getTag_Report()
{
	return e4c::tag< Report >::get();
}
 
e4c::tag_t UiPackage::getTag_UIModel()
{
	return e4c::tag< UIModel >::get();
}
 
e4c::tag_t UiPackage::getTag_AbstractUIRelationship()
{
	return e4c::tag< AbstractUIRelationship >::get();
}
 
e4c::tag_t UiPackage::getTag_UILayout()
{
	return e4c::tag< UILayout >::get();
}
 
e4c::tag_t UiPackage::getTag_UIField()
{
	return e4c::tag< UIField >::get();
}
 
e4c::tag_t UiPackage::getTag_DisplaysImage()
{
	return e4c::tag< DisplaysImage >::get();
}
 
e4c::tag_t UiPackage::getTag_Displays()
{
	return e4c::tag< Displays >::get();
}
 
e4c::tag_t UiPackage::getTag_UIFlow()
{
	return e4c::tag< UIFlow >::get();
}
 
e4c::tag_t UiPackage::getTag_UIElement()
{
	return e4c::tag< UIElement >::get();
}
 
e4c::tag_t UiPackage::getTag_UIRelationship()
{
	return e4c::tag< UIRelationship >::get();
}
 
e4c::tag_t UiPackage::getTag_UIAction()
{
	return e4c::tag< UIAction >::get();
}
 
e4c::tag_t UiPackage::getTag_UIEvent()
{
	return e4c::tag< UIEvent >::get();
}
 
e4c::tag_t UiPackage::getTag_ReadsUI()
{
	return e4c::tag< ReadsUI >::get();
}
 
e4c::tag_t UiPackage::getTag_WritesUI()
{
	return e4c::tag< WritesUI >::get();
}
 
e4c::tag_t UiPackage::getTag_ManagesUI()
{
	return e4c::tag< ManagesUI >::get();
}
 
e4c::tag_t UiPackage::getTag_AbstractUIElement__source()
{
	return e4c::tag< AbstractUIElement__source_tag >::get();
}

e4c::tag_t UiPackage::getTag_AbstractUIElement__UIRelation()
{
	return e4c::tag< AbstractUIElement__UIRelation_tag >::get();
}

e4c::tag_t UiPackage::getTag_AbstractUIElement__implementation()
{
	return e4c::tag< AbstractUIElement__implementation_tag >::get();
}

e4c::tag_t UiPackage::getTag_AbstractUIElement__abstraction()
{
	return e4c::tag< AbstractUIElement__abstraction_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIResource__UIElement()
{
	return e4c::tag< UIResource__UIElement_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIModel__UIElement()
{
	return e4c::tag< UIModel__UIElement_tag >::get();
}

e4c::tag_t UiPackage::getTag_UILayout__to()
{
	return e4c::tag< UILayout__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_UILayout__from()
{
	return e4c::tag< UILayout__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_DisplaysImage__to()
{
	return e4c::tag< DisplaysImage__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_DisplaysImage__from()
{
	return e4c::tag< DisplaysImage__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_Displays__to()
{
	return e4c::tag< Displays__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_Displays__from()
{
	return e4c::tag< Displays__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIFlow__to()
{
	return e4c::tag< UIFlow__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIFlow__from()
{
	return e4c::tag< UIFlow__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIRelationship__to()
{
	return e4c::tag< UIRelationship__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIRelationship__from()
{
	return e4c::tag< UIRelationship__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIAction__kind()
{
	return e4c::tag< UIAction__kind_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIAction__UIElement()
{
	return e4c::tag< UIAction__UIElement_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIEvent__kind()
{
	return e4c::tag< UIEvent__kind_tag >::get();
}

e4c::tag_t UiPackage::getTag_ReadsUI__to()
{
	return e4c::tag< ReadsUI__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_ReadsUI__from()
{
	return e4c::tag< ReadsUI__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_WritesUI__to()
{
	return e4c::tag< WritesUI__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_WritesUI__from()
{
	return e4c::tag< WritesUI__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_ManagesUI__to()
{
	return e4c::tag< ManagesUI__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_ManagesUI__from()
{
	return e4c::tag< ManagesUI__from_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_kdm_ui()
{
	return ::kdm::ui::UiPackage::_instance();
}
