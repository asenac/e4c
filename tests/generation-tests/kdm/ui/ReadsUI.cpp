
#include "ReadsUI.hpp"
#include <kdm/ui/UiPackage.hpp>
#include <kdm/ui/UIResource.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::ReadsUI include) START*/
/*PROTECTED REGION END*/

ReadsUI::ReadsUI() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(ReadsUI constructor) START*/
    /*PROTECTED REGION END*/
}

ReadsUI::~ReadsUI()
{
    /*PROTECTED REGION ID(ReadsUI destructor) START*/
    /*PROTECTED REGION END*/
}

ReadsUI::to_t ReadsUI::getTo() const
{
    return e4c::returned(m_to);
}

void ReadsUI::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

ReadsUI::from_t ReadsUI::getFrom() const
{
    return e4c::returned(m_from);
}

void ReadsUI::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::ui::ReadsUI implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ReadsUI::eClassImpl() const
{
    return UiPackage::_instance()->getReadsUI();
}

