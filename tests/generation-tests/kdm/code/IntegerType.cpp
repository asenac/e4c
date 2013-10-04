
#include "IntegerType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::IntegerType include) START*/
/*PROTECTED REGION END*/

IntegerType::IntegerType()
{
	/*PROTECTED REGION ID(IntegerType constructor) START*/
	/*PROTECTED REGION END*/
}

IntegerType::~IntegerType()
{
	/*PROTECTED REGION ID(IntegerType destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::IntegerType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr IntegerType::eClassImpl() const
{
	return CodePackage::_instance()->getIntegerType();
}
 
