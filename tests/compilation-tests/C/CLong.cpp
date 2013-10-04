
#include "CLong.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CLong include) START*/
/*PROTECTED REGION END*/

CLong::CLong()
{
	/*PROTECTED REGION ID(CLong constructor) START*/
	/*PROTECTED REGION END*/
}

CLong::~CLong()
{
	/*PROTECTED REGION ID(CLong destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CLong implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CLong::eClassImpl() const
{
	return CPackage::_instance()->getCLong();
}
 
