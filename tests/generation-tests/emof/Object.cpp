
#include "Object.hpp"
#include <emof/EmofPackage.hpp>

using namespace emof;

/*PROTECTED REGION ID(emof::Object include) START*/
/*PROTECTED REGION END*/

Object::Object()
{
	/*PROTECTED REGION ID(Object constructor) START*/
	/*PROTECTED REGION END*/
}

Object::~Object()
{
	/*PROTECTED REGION ID(Object destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(emof::Object implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Object::eClassImpl() const
{
	return EmofPackage::_instance()->getObject();
}
 
