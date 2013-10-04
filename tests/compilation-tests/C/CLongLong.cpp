
#include "CLongLong.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CLongLong include) START*/
/*PROTECTED REGION END*/

CLongLong::CLongLong()
{
	/*PROTECTED REGION ID(CLongLong constructor) START*/
	/*PROTECTED REGION END*/
}

CLongLong::~CLongLong()
{
	/*PROTECTED REGION ID(CLongLong destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CLongLong implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CLongLong::eClassImpl() const
{
	return CPackage::_instance()->getCLongLong();
}
 
