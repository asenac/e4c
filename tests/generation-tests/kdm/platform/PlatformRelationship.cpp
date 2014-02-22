
#include "PlatformRelationship.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/platform/AbstractPlatformElement.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::PlatformRelationship include) START*/
/*PROTECTED REGION END*/

PlatformRelationship::PlatformRelationship() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(PlatformRelationship constructor) START*/
    /*PROTECTED REGION END*/
}

PlatformRelationship::~PlatformRelationship()
{
    /*PROTECTED REGION ID(PlatformRelationship destructor) START*/
    /*PROTECTED REGION END*/
}

PlatformRelationship::to_t PlatformRelationship::getTo() const
{
    return e4c::returned(m_to);
}

void PlatformRelationship::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

PlatformRelationship::from_t PlatformRelationship::getFrom() const
{
    return e4c::returned(m_from);
}

void PlatformRelationship::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::platform::PlatformRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr PlatformRelationship::eClassImpl() const
{
    return PlatformPackage::_instance()->getPlatformRelationship();
}

