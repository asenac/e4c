
#include "UnsignedLongLong.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::UnsignedLongLong include) START*/
/*PROTECTED REGION END*/

UnsignedLongLong::UnsignedLongLong()
{
	/*PROTECTED REGION ID(UnsignedLongLong constructor) START*/
	/*PROTECTED REGION END*/
}

UnsignedLongLong::~UnsignedLongLong()
{
	/*PROTECTED REGION ID(UnsignedLongLong destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::UnsignedLongLong implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UnsignedLongLong::eClassImpl() const
{
	return CPackage::_instance()->getUnsignedLongLong();
}
 
