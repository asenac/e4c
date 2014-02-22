
#include "Value.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::Value include) START*/
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



/*PROTECTED REGION ID(kdm::code::Value implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Value::eClassImpl() const
{
    return CodePackage::_instance()->getValue();
}

