
#include "Writes.hpp"
#include <kdm/action/ActionPackage.hpp>
#include <kdm/code/DataElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::Writes include) START*/
/*PROTECTED REGION END*/

Writes::Writes() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(Writes constructor) START*/
    /*PROTECTED REGION END*/
}

Writes::~Writes()
{
    /*PROTECTED REGION ID(Writes destructor) START*/
    /*PROTECTED REGION END*/
}

Writes::to_t Writes::getTo() const
{
    return e4c::returned(m_to);
}

void Writes::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

Writes::from_t Writes::getFrom() const
{
    return e4c::returned(m_from);
}

void Writes::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::action::Writes implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Writes::eClassImpl() const
{
    return ActionPackage::_instance()->getWrites();
}

