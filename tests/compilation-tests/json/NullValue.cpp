
#include "NullValue.hpp"
#include <json/JsonPackage.hpp>

using namespace json;

/*PROTECTED REGION ID(json::NullValue include) START*/
/*PROTECTED REGION END*/

NullValue::NullValue()
{
	/*PROTECTED REGION ID(NullValue constructor) START*/
	/*PROTECTED REGION END*/
}

NullValue::~NullValue()
{
	/*PROTECTED REGION ID(NullValue destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(json::NullValue implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr NullValue::eClassImpl() const
{
	return JsonPackage::_instance()->getNullValue();
}
 
