
#include "ManagesUI.hpp"
#include <kdm/ui/UiPackage.hpp>
#include <kdm/ui/UIResource.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::ManagesUI include) START*/
/*PROTECTED REGION END*/

ManagesUI::ManagesUI() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(ManagesUI constructor) START*/
    /*PROTECTED REGION END*/
}

ManagesUI::~ManagesUI()
{
    /*PROTECTED REGION ID(ManagesUI destructor) START*/
    /*PROTECTED REGION END*/
}

ManagesUI::to_t ManagesUI::getTo() const
{
    return e4c::returned(m_to);
}

void ManagesUI::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

ManagesUI::from_t ManagesUI::getFrom() const
{
    return e4c::returned(m_from);
}

void ManagesUI::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::ui::ManagesUI implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ManagesUI::eClassImpl() const
{
    return UiPackage::_instance()->getManagesUI();
}

