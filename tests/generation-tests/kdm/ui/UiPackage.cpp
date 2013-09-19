#include "UiPackage.hpp"
#include "UiFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::ui;

UiPackage::UiPackage()
{
	m_eFactoryInstance = UiFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
}

const UiPackage_ptr UiPackage::_instance()
{
	static UiPackage __instance;
	return &__instance;
}

e4c::tag_t UiPackage::getTag_AbstractUIElement() const
{
	return e4c::tag< AbstractUIElement >::get();
}
 
e4c::tag_t UiPackage::getTag_UIResource() const
{
	return e4c::tag< UIResource >::get();
}
 
e4c::tag_t UiPackage::getTag_UIDisplay() const
{
	return e4c::tag< UIDisplay >::get();
}
 
e4c::tag_t UiPackage::getTag_Screen() const
{
	return e4c::tag< Screen >::get();
}
 
e4c::tag_t UiPackage::getTag_Report() const
{
	return e4c::tag< Report >::get();
}
 
e4c::tag_t UiPackage::getTag_UIModel() const
{
	return e4c::tag< UIModel >::get();
}
 
e4c::tag_t UiPackage::getTag_AbstractUIRelationship() const
{
	return e4c::tag< AbstractUIRelationship >::get();
}
 
e4c::tag_t UiPackage::getTag_UILayout() const
{
	return e4c::tag< UILayout >::get();
}
 
e4c::tag_t UiPackage::getTag_UIField() const
{
	return e4c::tag< UIField >::get();
}
 
e4c::tag_t UiPackage::getTag_DisplaysImage() const
{
	return e4c::tag< DisplaysImage >::get();
}
 
e4c::tag_t UiPackage::getTag_Displays() const
{
	return e4c::tag< Displays >::get();
}
 
e4c::tag_t UiPackage::getTag_UIFlow() const
{
	return e4c::tag< UIFlow >::get();
}
 
e4c::tag_t UiPackage::getTag_UIElement() const
{
	return e4c::tag< UIElement >::get();
}
 
e4c::tag_t UiPackage::getTag_UIRelationship() const
{
	return e4c::tag< UIRelationship >::get();
}
 
e4c::tag_t UiPackage::getTag_UIAction() const
{
	return e4c::tag< UIAction >::get();
}
 
e4c::tag_t UiPackage::getTag_UIEvent() const
{
	return e4c::tag< UIEvent >::get();
}
 
e4c::tag_t UiPackage::getTag_ReadsUI() const
{
	return e4c::tag< ReadsUI >::get();
}
 
e4c::tag_t UiPackage::getTag_WritesUI() const
{
	return e4c::tag< WritesUI >::get();
}
 
e4c::tag_t UiPackage::getTag_ManagesUI() const
{
	return e4c::tag< ManagesUI >::get();
}
 
e4c::tag_t UiPackage::getTag_AbstractUIElement__source() const
{
	return e4c::tag< AbstractUIElement__source_tag >::get();
}

e4c::tag_t UiPackage::getTag_AbstractUIElement__UIRelation() const
{
	return e4c::tag< AbstractUIElement__UIRelation_tag >::get();
}

e4c::tag_t UiPackage::getTag_AbstractUIElement__implementation() const
{
	return e4c::tag< AbstractUIElement__implementation_tag >::get();
}

e4c::tag_t UiPackage::getTag_AbstractUIElement__abstraction() const
{
	return e4c::tag< AbstractUIElement__abstraction_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIResource__UIElement() const
{
	return e4c::tag< UIResource__UIElement_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIModel__UIElement() const
{
	return e4c::tag< UIModel__UIElement_tag >::get();
}

e4c::tag_t UiPackage::getTag_UILayout__to() const
{
	return e4c::tag< UILayout__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_UILayout__from() const
{
	return e4c::tag< UILayout__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_DisplaysImage__to() const
{
	return e4c::tag< DisplaysImage__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_DisplaysImage__from() const
{
	return e4c::tag< DisplaysImage__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_Displays__to() const
{
	return e4c::tag< Displays__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_Displays__from() const
{
	return e4c::tag< Displays__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIFlow__to() const
{
	return e4c::tag< UIFlow__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIFlow__from() const
{
	return e4c::tag< UIFlow__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIRelationship__to() const
{
	return e4c::tag< UIRelationship__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIRelationship__from() const
{
	return e4c::tag< UIRelationship__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIAction__kind() const
{
	return e4c::tag< UIAction__kind_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIAction__UIElement() const
{
	return e4c::tag< UIAction__UIElement_tag >::get();
}

e4c::tag_t UiPackage::getTag_UIEvent__kind() const
{
	return e4c::tag< UIEvent__kind_tag >::get();
}

e4c::tag_t UiPackage::getTag_ReadsUI__to() const
{
	return e4c::tag< ReadsUI__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_ReadsUI__from() const
{
	return e4c::tag< ReadsUI__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_WritesUI__to() const
{
	return e4c::tag< WritesUI__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_WritesUI__from() const
{
	return e4c::tag< WritesUI__from_tag >::get();
}

e4c::tag_t UiPackage::getTag_ManagesUI__to() const
{
	return e4c::tag< ManagesUI__to_tag >::get();
}

e4c::tag_t UiPackage::getTag_ManagesUI__from() const
{
	return e4c::tag< ManagesUI__from_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_ui()
{
	return ::kdm::ui::UiPackage::_instance();
}
