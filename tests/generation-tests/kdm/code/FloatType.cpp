
#include "FloatType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::FloatType include) START*/
/*PROTECTED REGION END*/

FloatType::FloatType()
{
	/*PROTECTED REGION ID(FloatType constructor) START*/
	/*PROTECTED REGION END*/
}

FloatType::~FloatType()
{
	/*PROTECTED REGION ID(FloatType destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::FloatType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr FloatType::eClassImpl() const
{
	return CodePackage::_instance()->getFloatType();
}
 
