
#include "TryUnit.hpp"
#include <kdm/action/ActionPackage.hpp>

using namespace kdm::action;

/*PROTECTED REGION ID(kdm::action::TryUnit include) START*/
/*PROTECTED REGION END*/

TryUnit::TryUnit()
{
	/*PROTECTED REGION ID(TryUnit constructor) START*/
	/*PROTECTED REGION END*/
}

TryUnit::~TryUnit()
{
	/*PROTECTED REGION ID(TryUnit destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::action::TryUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TryUnit::eClassImpl() const
{
	return ActionPackage::_instance()->getTryUnit();
}
 
