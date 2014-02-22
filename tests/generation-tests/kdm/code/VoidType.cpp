
#include "VoidType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::VoidType include) START*/
/*PROTECTED REGION END*/

VoidType::VoidType()
{
    /*PROTECTED REGION ID(VoidType constructor) START*/
    /*PROTECTED REGION END*/
}

VoidType::~VoidType()
{
    /*PROTECTED REGION ID(VoidType destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::VoidType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr VoidType::eClassImpl() const
{
    return CodePackage::_instance()->getVoidType();
}

