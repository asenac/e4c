
#include "CSignedChar.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CSignedChar include) START*/
/*PROTECTED REGION END*/

CSignedChar::CSignedChar()
{
	/*PROTECTED REGION ID(CSignedChar constructor) START*/
	/*PROTECTED REGION END*/
}

CSignedChar::~CSignedChar()
{
	/*PROTECTED REGION ID(CSignedChar destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CSignedChar implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CSignedChar::eClassImpl() const
{
	return CPackage::_instance()->getCSignedChar();
}
 
