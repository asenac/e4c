
#include "UIRelationship.hpp"
#include <kdm/ui/UiPackage.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/ui/AbstractUIElement.hpp>

using namespace kdm::ui;

/*PROTECTED REGION ID(kdm::ui::UIRelationship include) START*/
/*PROTECTED REGION END*/

UIRelationship::UIRelationship() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(UIRelationship constructor) START*/
    /*PROTECTED REGION END*/
}

UIRelationship::~UIRelationship()
{
    /*PROTECTED REGION ID(UIRelationship destructor) START*/
    /*PROTECTED REGION END*/
}

UIRelationship::to_t UIRelationship::getTo() const
{
    return e4c::returned(m_to);
}

void UIRelationship::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

UIRelationship::from_t UIRelationship::getFrom() const
{
    return e4c::returned(m_from);
}

void UIRelationship::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::ui::UIRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UIRelationship::eClassImpl() const
{
    return UiPackage::_instance()->getUIRelationship();
}

