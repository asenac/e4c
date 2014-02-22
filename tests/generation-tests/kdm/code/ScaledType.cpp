
#include "ScaledType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::ScaledType include) START*/
/*PROTECTED REGION END*/

ScaledType::ScaledType()
{
    /*PROTECTED REGION ID(ScaledType constructor) START*/
    /*PROTECTED REGION END*/
}

ScaledType::~ScaledType()
{
    /*PROTECTED REGION ID(ScaledType destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::ScaledType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ScaledType::eClassImpl() const
{
    return CodePackage::_instance()->getScaledType();
}

