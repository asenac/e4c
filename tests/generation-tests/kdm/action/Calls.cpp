
#include "Calls.hpp"
#include <kdm/action/ActionPackage.hpp>
#include <kdm/code/ControlElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::Calls include) START*/
/*PROTECTED REGION END*/

Calls::Calls() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(Calls constructor) START*/
    /*PROTECTED REGION END*/
}

Calls::~Calls()
{
    /*PROTECTED REGION ID(Calls destructor) START*/
    /*PROTECTED REGION END*/
}

Calls::to_t Calls::getTo() const
{
    return e4c::returned(m_to);
}

void Calls::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

Calls::from_t Calls::getFrom() const
{
    return e4c::returned(m_from);
}

void Calls::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::action::Calls implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Calls::eClassImpl() const
{
    return ActionPackage::_instance()->getCalls();
}

