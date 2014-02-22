
#include "TypeUnit.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::TypeUnit include) START*/
/*PROTECTED REGION END*/

TypeUnit::TypeUnit()
{
    /*PROTECTED REGION ID(TypeUnit constructor) START*/
    /*PROTECTED REGION END*/
}

TypeUnit::~TypeUnit()
{
    /*PROTECTED REGION ID(TypeUnit destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::TypeUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TypeUnit::eClassImpl() const
{
    return CodePackage::_instance()->getTypeUnit();
}

