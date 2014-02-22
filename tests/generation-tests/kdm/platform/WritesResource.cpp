
#include "WritesResource.hpp"
#include <kdm/platform/PlatformPackage.hpp>
#include <kdm/platform/ResourceType.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::WritesResource include) START*/
/*PROTECTED REGION END*/

WritesResource::WritesResource() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(WritesResource constructor) START*/
    /*PROTECTED REGION END*/
}

WritesResource::~WritesResource()
{
    /*PROTECTED REGION ID(WritesResource destructor) START*/
    /*PROTECTED REGION END*/
}

WritesResource::to_t WritesResource::getTo() const
{
    return e4c::returned(m_to);
}

void WritesResource::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

WritesResource::from_t WritesResource::getFrom() const
{
    return e4c::returned(m_from);
}

void WritesResource::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::platform::WritesResource implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr WritesResource::eClassImpl() const
{
    return PlatformPackage::_instance()->getWritesResource();
}

