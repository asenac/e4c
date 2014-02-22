
#include "CompliesTo.hpp"
#include <kdm/action/ActionPackage.hpp>
#include <kdm/code/CodeItem.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::CompliesTo include) START*/
/*PROTECTED REGION END*/

CompliesTo::CompliesTo() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(CompliesTo constructor) START*/
    /*PROTECTED REGION END*/
}

CompliesTo::~CompliesTo()
{
    /*PROTECTED REGION ID(CompliesTo destructor) START*/
    /*PROTECTED REGION END*/
}

CompliesTo::to_t CompliesTo::getTo() const
{
    return e4c::returned(m_to);
}

void CompliesTo::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

CompliesTo::from_t CompliesTo::getFrom() const
{
    return e4c::returned(m_from);
}

void CompliesTo::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::action::CompliesTo implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CompliesTo::eClassImpl() const
{
    return ActionPackage::_instance()->getCompliesTo();
}

