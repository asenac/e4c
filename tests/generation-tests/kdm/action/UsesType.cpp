
#include "UsesType.hpp"
#include <kdm/action/ActionPackage.hpp>
#include <kdm/code/Datatype.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::UsesType include) START*/
/*PROTECTED REGION END*/

UsesType::UsesType() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(UsesType constructor) START*/
    /*PROTECTED REGION END*/
}

UsesType::~UsesType()
{
    /*PROTECTED REGION ID(UsesType destructor) START*/
    /*PROTECTED REGION END*/
}

UsesType::to_t UsesType::getTo() const
{
    return e4c::returned(m_to);
}

void UsesType::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

UsesType::from_t UsesType::getFrom() const
{
    return e4c::returned(m_from);
}

void UsesType::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::action::UsesType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UsesType::eClassImpl() const
{
    return ActionPackage::_instance()->getUsesType();
}

