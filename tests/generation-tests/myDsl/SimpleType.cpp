
#include "SimpleType.hpp"
#include <myDsl/MyDslPackage.hpp>

using namespace myDsl;

/*PROTECTED REGION ID(myDsl::SimpleType include) START*/
/*PROTECTED REGION END*/

SimpleType::SimpleType()
{
	/*PROTECTED REGION ID(SimpleType constructor) START*/
	/*PROTECTED REGION END*/
}

SimpleType::~SimpleType()
{
	/*PROTECTED REGION ID(SimpleType destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(myDsl::SimpleType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr SimpleType::eClassImpl() const
{
	return MyDslPackage::_instance()->getSimpleType();
}
 
