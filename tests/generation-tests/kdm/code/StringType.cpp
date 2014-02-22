
#include "StringType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::StringType include) START*/
/*PROTECTED REGION END*/

StringType::StringType()
{
    /*PROTECTED REGION ID(StringType constructor) START*/
    /*PROTECTED REGION END*/
}

StringType::~StringType()
{
    /*PROTECTED REGION ID(StringType destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::StringType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr StringType::eClassImpl() const
{
    return CodePackage::_instance()->getStringType();
}

