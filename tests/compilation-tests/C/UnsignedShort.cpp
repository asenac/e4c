
#include "UnsignedShort.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::UnsignedShort include) START*/
/*PROTECTED REGION END*/

UnsignedShort::UnsignedShort()
{
	/*PROTECTED REGION ID(UnsignedShort constructor) START*/
	/*PROTECTED REGION END*/
}

UnsignedShort::~UnsignedShort()
{
	/*PROTECTED REGION ID(UnsignedShort destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::UnsignedShort implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UnsignedShort::eClassImpl() const
{
	return CPackage::_instance()->getUnsignedShort();
}
 
