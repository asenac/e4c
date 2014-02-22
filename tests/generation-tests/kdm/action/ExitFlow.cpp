
#include "ExitFlow.hpp"
#include <kdm/action/ActionPackage.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::ExitFlow include) START*/
/*PROTECTED REGION END*/

ExitFlow::ExitFlow() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(ExitFlow constructor) START*/
    /*PROTECTED REGION END*/
}

ExitFlow::~ExitFlow()
{
    /*PROTECTED REGION ID(ExitFlow destructor) START*/
    /*PROTECTED REGION END*/
}

ExitFlow::to_t ExitFlow::getTo() const
{
    return e4c::returned(m_to);
}

void ExitFlow::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

ExitFlow::from_t ExitFlow::getFrom() const
{
    return e4c::returned(m_from);
}

void ExitFlow::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::action::ExitFlow implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ExitFlow::eClassImpl() const
{
    return ActionPackage::_instance()->getExitFlow();
}

