
#include "Transition.hpp"
#include <kdm/event/EventPackage.hpp>

using namespace kdm::event;

/*PROTECTED REGION ID(kdm::event::Transition include) START*/
/*PROTECTED REGION END*/

Transition::Transition()
{
	/*PROTECTED REGION ID(Transition constructor) START*/
	/*PROTECTED REGION END*/
}

Transition::~Transition()
{
	/*PROTECTED REGION ID(Transition destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::event::Transition implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Transition::eClassImpl() const
{
	return EventPackage::_instance()->getTransition();
}
 
