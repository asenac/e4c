
#include "Spawns.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/platform/RuntimeResource.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::Spawns include) START*/
/*PROTECTED REGION END*/

Spawns::Spawns() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(Spawns constructor) START*/
    /*PROTECTED REGION END*/
}

Spawns::~Spawns()
{
    /*PROTECTED REGION ID(Spawns destructor) START*/
    /*PROTECTED REGION END*/
}

Spawns::to_t Spawns::getTo() const
{
    return e4c::returned(m_to);
}

void Spawns::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

Spawns::from_t Spawns::getFrom() const
{
    return e4c::returned(m_from);
}

void Spawns::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::platform::Spawns implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Spawns::eClassImpl() const
{
    return PlatformPackage::_instance()->getSpawns();
}

