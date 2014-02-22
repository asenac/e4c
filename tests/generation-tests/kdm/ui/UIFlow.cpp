
#include "UIFlow.hpp"
#include <kdm/ui/UiPackage.hpp>
#include <kdm/ui/AbstractUIElement.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::UIFlow include) START*/
/*PROTECTED REGION END*/

UIFlow::UIFlow() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(UIFlow constructor) START*/
    /*PROTECTED REGION END*/
}

UIFlow::~UIFlow()
{
    /*PROTECTED REGION ID(UIFlow destructor) START*/
    /*PROTECTED REGION END*/
}

UIFlow::to_t UIFlow::getTo() const
{
    return e4c::returned(m_to);
}

void UIFlow::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

UIFlow::from_t UIFlow::getFrom() const
{
    return e4c::returned(m_from);
}

void UIFlow::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::ui::UIFlow implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UIFlow::eClassImpl() const
{
    return UiPackage::_instance()->getUIFlow();
}

