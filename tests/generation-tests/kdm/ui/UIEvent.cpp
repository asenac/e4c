
#include "UIEvent.hpp"
#include <kdm/ui/UiPackage.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::UIEvent include) START*/
/*PROTECTED REGION END*/

UIEvent::UIEvent() : 
	m_kind()
{
	/*PROTECTED REGION ID(UIEvent constructor) START*/
	/*PROTECTED REGION END*/
}

UIEvent::~UIEvent()
{
	/*PROTECTED REGION ID(UIEvent destructor) START*/
	/*PROTECTED REGION END*/
}

void UIEvent::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

UIEvent::kind_t UIEvent::getKind() const
{
	return m_kind;
}



/*PROTECTED REGION ID(kdm::ui::UIEvent implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UIEvent::eClassImpl() const
{
	return UiPackage::_instance()->getUIEvent();
}
 
