
#include "WritesUI.hpp"
#include <kdm/ui/UiPackage.hpp>
#include <kdm/ui/UIResource.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::WritesUI include) START*/
/*PROTECTED REGION END*/

WritesUI::WritesUI() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(WritesUI constructor) START*/
    /*PROTECTED REGION END*/
}

WritesUI::~WritesUI()
{
    /*PROTECTED REGION ID(WritesUI destructor) START*/
    /*PROTECTED REGION END*/
}

WritesUI::to_t WritesUI::getTo() const
{
    return e4c::returned(m_to);
}

void WritesUI::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

WritesUI::from_t WritesUI::getFrom() const
{
    return e4c::returned(m_from);
}

void WritesUI::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::ui::WritesUI implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr WritesUI::eClassImpl() const
{
    return UiPackage::_instance()->getWritesUI();
}

