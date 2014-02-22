
#include "TimeType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::TimeType include) START*/
/*PROTECTED REGION END*/

TimeType::TimeType()
{
    /*PROTECTED REGION ID(TimeType constructor) START*/
    /*PROTECTED REGION END*/
}

TimeType::~TimeType()
{
    /*PROTECTED REGION ID(TimeType destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::TimeType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TimeType::eClassImpl() const
{
    return CodePackage::_instance()->getTimeType();
}

