
#include "BitstringType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::BitstringType include) START*/
/*PROTECTED REGION END*/

BitstringType::BitstringType()
{
    /*PROTECTED REGION ID(BitstringType constructor) START*/
    /*PROTECTED REGION END*/
}

BitstringType::~BitstringType()
{
    /*PROTECTED REGION ID(BitstringType destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::BitstringType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr BitstringType::eClassImpl() const
{
    return CodePackage::_instance()->getBitstringType();
}

