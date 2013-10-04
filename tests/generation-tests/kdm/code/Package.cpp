
#include "Package.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::Package include) START*/
/*PROTECTED REGION END*/

Package::Package()
{
	/*PROTECTED REGION ID(Package constructor) START*/
	/*PROTECTED REGION END*/
}

Package::~Package()
{
	/*PROTECTED REGION ID(Package destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::Package implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Package::eClassImpl() const
{
	return CodePackage::_instance()->getPackage();
}
 
