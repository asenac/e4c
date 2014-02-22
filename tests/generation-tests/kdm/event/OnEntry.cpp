
#include "OnEntry.hpp"
#include <kdm/event/EventPackage.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::OnEntry include) START*/
/*PROTECTED REGION END*/

OnEntry::OnEntry()
{
    /*PROTECTED REGION ID(OnEntry constructor) START*/
    /*PROTECTED REGION END*/
}

OnEntry::~OnEntry()
{
    /*PROTECTED REGION ID(OnEntry destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::event::OnEntry implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr OnEntry::eClassImpl() const
{
    return EventPackage::_instance()->getOnEntry();
}

