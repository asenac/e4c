
#include "DataSegment.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::DataSegment include) START*/
/*PROTECTED REGION END*/

DataSegment::DataSegment()
{
    /*PROTECTED REGION ID(DataSegment constructor) START*/
    /*PROTECTED REGION END*/
}

DataSegment::~DataSegment()
{
    /*PROTECTED REGION ID(DataSegment destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::DataSegment implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DataSegment::eClassImpl() const
{
    return DataPackage::_instance()->getDataSegment();
}

