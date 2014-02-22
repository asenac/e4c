
#include "BitType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::BitType include) START*/
/*PROTECTED REGION END*/

BitType::BitType()
{
    /*PROTECTED REGION ID(BitType constructor) START*/
    /*PROTECTED REGION END*/
}

BitType::~BitType()
{
    /*PROTECTED REGION ID(BitType destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::BitType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr BitType::eClassImpl() const
{
    return CodePackage::_instance()->getBitType();
}

