
#include "Creates.hpp"
#include <kdm/action/ActionPackage.hpp>
#include <kdm/code/Datatype.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::Creates include) START*/
/*PROTECTED REGION END*/

Creates::Creates() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(Creates constructor) START*/
    /*PROTECTED REGION END*/
}

Creates::~Creates()
{
    /*PROTECTED REGION ID(Creates destructor) START*/
    /*PROTECTED REGION END*/
}

Creates::to_t Creates::getTo() const
{
    return e4c::returned(m_to);
}

void Creates::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

Creates::from_t Creates::getFrom() const
{
    return e4c::returned(m_from);
}

void Creates::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::action::Creates implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Creates::eClassImpl() const
{
    return ActionPackage::_instance()->getCreates();
}

