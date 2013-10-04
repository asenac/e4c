
#include "UILayout.hpp"
#include <kdm/ui/UiPackage.hpp>
#include <kdm/ui/UIResource.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::UILayout include) START*/
/*PROTECTED REGION END*/

UILayout::UILayout() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(UILayout constructor) START*/
	/*PROTECTED REGION END*/
}

UILayout::~UILayout()
{
	/*PROTECTED REGION ID(UILayout destructor) START*/
	/*PROTECTED REGION END*/
}

UILayout::to_t UILayout::getTo() const
{
	return e4c::returned(m_to);
}

void UILayout::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

UILayout::from_t UILayout::getFrom() const
{
	return e4c::returned(m_from);
}

void UILayout::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::ui::UILayout implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UILayout::eClassImpl() const
{
	return UiPackage::_instance()->getUILayout();
}
 
