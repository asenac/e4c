
#include "UIResource.hpp"
#include <kdm/ui/UiPackage.hpp>
#include <kdm/ui/AbstractUIElement.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::UIResource include) START*/
/*PROTECTED REGION END*/

UIResource::UIResource() : 
	m_UIElement()
{
	/*PROTECTED REGION ID(UIResource constructor) START*/
	/*PROTECTED REGION END*/
}

UIResource::~UIResource()
{
	/*PROTECTED REGION ID(UIResource destructor) START*/
	/*PROTECTED REGION END*/
}

UIResource::UIElement_t UIResource::getUIElement() const
{
	return e4c::returned(m_UIElement);
}


void UIResource::addUIElement(kdm::ui::AbstractUIElement_ptr UIElement_)
{
	m_UIElement.insert(std::unique_ptr < kdm::ui::AbstractUIElement >(UIElement_));
}

void UIResource::addAllUIElement(const UIElement_t& UIElement_)
{
	for (auto i = UIElement_.begin(); i != UIElement_.end(); i++)
		addUIElement(*i);
}



/*PROTECTED REGION ID(kdm::ui::UIResource implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UIResource::eClassImpl() const
{
	return UiPackage::_instance()->getUIResource();
}
 
