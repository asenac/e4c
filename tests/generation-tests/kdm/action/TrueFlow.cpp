
#include "TrueFlow.hpp"
#include <kdm/action/ActionPackage.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::TrueFlow include) START*/
/*PROTECTED REGION END*/

TrueFlow::TrueFlow()
{
	/*PROTECTED REGION ID(TrueFlow constructor) START*/
	/*PROTECTED REGION END*/
}

TrueFlow::~TrueFlow()
{
	/*PROTECTED REGION ID(TrueFlow destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::action::TrueFlow implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TrueFlow::eClassImpl() const
{
	return ActionPackage::_instance()->getTrueFlow();
}
 
