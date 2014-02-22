
#include "PlatformEvent.hpp"
#include <kdm/platform/PlatformPackage.hpp>

using namespace kdm::platform;

/*PROTECTED REGION ID(kdm::platform::PlatformEvent include) START*/
/*PROTECTED REGION END*/

PlatformEvent::PlatformEvent() :
    m_kind()
{
    /*PROTECTED REGION ID(PlatformEvent constructor) START*/
    /*PROTECTED REGION END*/
}

PlatformEvent::~PlatformEvent()
{
    /*PROTECTED REGION ID(PlatformEvent destructor) START*/
    /*PROTECTED REGION END*/
}

void PlatformEvent::setKind(kind_t _kind)
{
    m_kind = _kind;;
}

PlatformEvent::kind_t PlatformEvent::getKind() const
{
    return m_kind;
}



/*PROTECTED REGION ID(kdm::platform::PlatformEvent implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr PlatformEvent::eClassImpl() const
{
    return PlatformPackage::_instance()->getPlatformEvent();
}

