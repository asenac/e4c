
#include "AbstractEventRelationship.hpp"
#include <kdm/event/EventPackage.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::AbstractEventRelationship include) START*/
/*PROTECTED REGION END*/

AbstractEventRelationship::AbstractEventRelationship()
{
    /*PROTECTED REGION ID(AbstractEventRelationship constructor) START*/
    /*PROTECTED REGION END*/
}

AbstractEventRelationship::~AbstractEventRelationship()
{
    /*PROTECTED REGION ID(AbstractEventRelationship destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::event::AbstractEventRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractEventRelationship::eClassImpl() const
{
    return EventPackage::_instance()->getAbstractEventRelationship();
}

