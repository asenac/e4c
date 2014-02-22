
#include "Dispatches.hpp"
#include <kdm/action/ActionPackage.hpp>
#include <kdm/code/DataElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::Dispatches include) START*/
/*PROTECTED REGION END*/

Dispatches::Dispatches() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(Dispatches constructor) START*/
    /*PROTECTED REGION END*/
}

Dispatches::~Dispatches()
{
    /*PROTECTED REGION ID(Dispatches destructor) START*/
    /*PROTECTED REGION END*/
}

Dispatches::to_t Dispatches::getTo() const
{
    return e4c::returned(m_to);
}

void Dispatches::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

Dispatches::from_t Dispatches::getFrom() const
{
    return e4c::returned(m_from);
}

void Dispatches::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::action::Dispatches implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Dispatches::eClassImpl() const
{
    return ActionPackage::_instance()->getDispatches();
}

