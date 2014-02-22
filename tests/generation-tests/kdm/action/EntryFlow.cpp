
#include "EntryFlow.hpp"
#include <kdm/action/ActionPackage.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/code/ControlElement.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::EntryFlow include) START*/
/*PROTECTED REGION END*/

EntryFlow::EntryFlow() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(EntryFlow constructor) START*/
    /*PROTECTED REGION END*/
}

EntryFlow::~EntryFlow()
{
    /*PROTECTED REGION ID(EntryFlow destructor) START*/
    /*PROTECTED REGION END*/
}

EntryFlow::to_t EntryFlow::getTo() const
{
    return e4c::returned(m_to);
}

void EntryFlow::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

EntryFlow::from_t EntryFlow::getFrom() const
{
    return e4c::returned(m_from);
}

void EntryFlow::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::action::EntryFlow implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EntryFlow::eClassImpl() const
{
    return ActionPackage::_instance()->getEntryFlow();
}

