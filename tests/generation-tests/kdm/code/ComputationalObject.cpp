
#include "ComputationalObject.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::ComputationalObject include) START*/
/*PROTECTED REGION END*/

ComputationalObject::ComputationalObject()
{
	/*PROTECTED REGION ID(ComputationalObject constructor) START*/
	/*PROTECTED REGION END*/
}

ComputationalObject::~ComputationalObject()
{
	/*PROTECTED REGION ID(ComputationalObject destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::ComputationalObject implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ComputationalObject::eClassImpl() const
{
	return CodePackage::_instance()->getComputationalObject();
}
 
