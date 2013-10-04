
#include "PrimitiveType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::PrimitiveType include) START*/
/*PROTECTED REGION END*/

PrimitiveType::PrimitiveType()
{
	/*PROTECTED REGION ID(PrimitiveType constructor) START*/
	/*PROTECTED REGION END*/
}

PrimitiveType::~PrimitiveType()
{
	/*PROTECTED REGION ID(PrimitiveType destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::PrimitiveType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr PrimitiveType::eClassImpl() const
{
	return CodePackage::_instance()->getPrimitiveType();
}
 
