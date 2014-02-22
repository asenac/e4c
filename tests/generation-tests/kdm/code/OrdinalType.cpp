
#include "OrdinalType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::OrdinalType include) START*/
/*PROTECTED REGION END*/

OrdinalType::OrdinalType()
{
    /*PROTECTED REGION ID(OrdinalType constructor) START*/
    /*PROTECTED REGION END*/
}

OrdinalType::~OrdinalType()
{
    /*PROTECTED REGION ID(OrdinalType destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::OrdinalType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr OrdinalType::eClassImpl() const
{
    return CodePackage::_instance()->getOrdinalType();
}

