
#include "Addresses.hpp"
#include <kdm/action/ActionPackage.hpp>
#include <kdm/code/ComputationalObject.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::Addresses include) START*/
/*PROTECTED REGION END*/

Addresses::Addresses() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(Addresses constructor) START*/
    /*PROTECTED REGION END*/
}

Addresses::~Addresses()
{
    /*PROTECTED REGION ID(Addresses destructor) START*/
    /*PROTECTED REGION END*/
}

Addresses::to_t Addresses::getTo() const
{
    return e4c::returned(m_to);
}

void Addresses::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

Addresses::from_t Addresses::getFrom() const
{
    return e4c::returned(m_from);
}

void Addresses::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::action::Addresses implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Addresses::eClassImpl() const
{
    return ActionPackage::_instance()->getAddresses();
}

