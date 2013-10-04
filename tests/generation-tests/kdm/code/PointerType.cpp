
#include "PointerType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::PointerType include) START*/
/*PROTECTED REGION END*/

PointerType::PointerType()
{
	/*PROTECTED REGION ID(PointerType constructor) START*/
	/*PROTECTED REGION END*/
}

PointerType::~PointerType()
{
	/*PROTECTED REGION ID(PointerType destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::PointerType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr PointerType::eClassImpl() const
{
	return CodePackage::_instance()->getPointerType();
}
 
