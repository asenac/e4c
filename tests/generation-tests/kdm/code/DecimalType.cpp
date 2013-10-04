
#include "DecimalType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::DecimalType include) START*/
/*PROTECTED REGION END*/

DecimalType::DecimalType()
{
	/*PROTECTED REGION ID(DecimalType constructor) START*/
	/*PROTECTED REGION END*/
}

DecimalType::~DecimalType()
{
	/*PROTECTED REGION ID(DecimalType destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::DecimalType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DecimalType::eClassImpl() const
{
	return CodePackage::_instance()->getDecimalType();
}
 
