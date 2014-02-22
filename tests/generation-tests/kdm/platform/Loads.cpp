
#include "Loads.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/platform/DeployedComponent.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::Loads include) START*/
/*PROTECTED REGION END*/

Loads::Loads() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(Loads constructor) START*/
    /*PROTECTED REGION END*/
}

Loads::~Loads()
{
    /*PROTECTED REGION ID(Loads destructor) START*/
    /*PROTECTED REGION END*/
}

Loads::to_t Loads::getTo() const
{
    return e4c::returned(m_to);
}

void Loads::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

Loads::from_t Loads::getFrom() const
{
    return e4c::returned(m_from);
}

void Loads::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::platform::Loads implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Loads::eClassImpl() const
{
    return PlatformPackage::_instance()->getLoads();
}

