
#include "RecordType.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::RecordType include) START*/
/*PROTECTED REGION END*/

RecordType::RecordType()
{
    /*PROTECTED REGION ID(RecordType constructor) START*/
    /*PROTECTED REGION END*/
}

RecordType::~RecordType()
{
    /*PROTECTED REGION ID(RecordType destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::RecordType implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr RecordType::eClassImpl() const
{
    return CodePackage::_instance()->getRecordType();
}

