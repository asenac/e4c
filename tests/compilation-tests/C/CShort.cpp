
#include "CShort.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CShort include) START*/
/*PROTECTED REGION END*/

CShort::CShort()
{
	/*PROTECTED REGION ID(CShort constructor) START*/
	/*PROTECTED REGION END*/
}

CShort::~CShort()
{
	/*PROTECTED REGION ID(CShort destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CShort implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CShort::eClassImpl() const
{
	return CPackage::_instance()->getCShort();
}
 
