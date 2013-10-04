
#include "CEnumeration.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CEnumeration include) START*/
/*PROTECTED REGION END*/

CEnumeration::CEnumeration()
{
	/*PROTECTED REGION ID(CEnumeration constructor) START*/
	/*PROTECTED REGION END*/
}

CEnumeration::~CEnumeration()
{
	/*PROTECTED REGION ID(CEnumeration destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(C::CEnumeration implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CEnumeration::eClassImpl() const
{
	return CPackage::_instance()->getCEnumeration();
}
 
