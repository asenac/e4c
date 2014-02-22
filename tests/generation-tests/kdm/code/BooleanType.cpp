
#include "BooleanType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::BooleanType include) START*/
/*PROTECTED REGION END*/

BooleanType::BooleanType()
{
    /*PROTECTED REGION ID(BooleanType constructor) START*/
    /*PROTECTED REGION END*/
}

BooleanType::~BooleanType()
{
    /*PROTECTED REGION ID(BooleanType destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::BooleanType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr BooleanType::eClassImpl() const
{
    return CodePackage::_instance()->getBooleanType();
}

