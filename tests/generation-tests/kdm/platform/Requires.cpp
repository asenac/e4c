
#include "Requires.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>
#include <kdm/platform/DeployedComponent.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::Requires include) START*/
/*PROTECTED REGION END*/

Requires::Requires() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(Requires constructor) START*/
    /*PROTECTED REGION END*/
}

Requires::~Requires()
{
    /*PROTECTED REGION ID(Requires destructor) START*/
    /*PROTECTED REGION END*/
}

Requires::to_t Requires::getTo() const
{
    return e4c::returned(m_to);
}

void Requires::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

Requires::from_t Requires::getFrom() const
{
    return e4c::returned(m_from);
}

void Requires::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::platform::Requires implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Requires::eClassImpl() const
{
    return PlatformPackage::_instance()->getRequires();
}

