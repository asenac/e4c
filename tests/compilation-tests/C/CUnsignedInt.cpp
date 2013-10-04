
#include "CUnsignedInt.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CUnsignedInt include) START*/
/*PROTECTED REGION END*/

CUnsignedInt::CUnsignedInt()
{
	/*PROTECTED REGION ID(CUnsignedInt constructor) START*/
	/*PROTECTED REGION END*/
}

CUnsignedInt::~CUnsignedInt()
{
	/*PROTECTED REGION ID(CUnsignedInt destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CUnsignedInt implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CUnsignedInt::eClassImpl() const
{
	return CPackage::_instance()->getCUnsignedInt();
}
 
