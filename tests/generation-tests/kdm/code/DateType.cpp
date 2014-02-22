
#include "DateType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::DateType include) START*/
/*PROTECTED REGION END*/

DateType::DateType()
{
    /*PROTECTED REGION ID(DateType constructor) START*/
    /*PROTECTED REGION END*/
}

DateType::~DateType()
{
    /*PROTECTED REGION ID(DateType destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::DateType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DateType::eClassImpl() const
{
    return CodePackage::_instance()->getDateType();
}

