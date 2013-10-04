
#include "CField.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CField include) START*/
/*PROTECTED REGION END*/

CField::CField()
{
	/*PROTECTED REGION ID(CField constructor) START*/
	/*PROTECTED REGION END*/
}

CField::~CField()
{
	/*PROTECTED REGION ID(CField destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CField implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CField::eClassImpl() const
{
	return CPackage::_instance()->getCField();
}
 
