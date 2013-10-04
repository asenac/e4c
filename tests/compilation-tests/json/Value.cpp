
#include "Value.hpp"
#include <json/JsonPackage.hpp>

using namespace json;

/*PROTECTED REGION ID(json::Value include) START*/
/*PROTECTED REGION END*/

Value::Value()
{
	/*PROTECTED REGION ID(Value constructor) START*/
	/*PROTECTED REGION END*/
}

Value::~Value()
{
	/*PROTECTED REGION ID(Value destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(json::Value implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Value::eClassImpl() const
{
	return JsonPackage::_instance()->getValue();
}
 
