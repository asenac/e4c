
#include "RecordFile.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::RecordFile include) START*/
/*PROTECTED REGION END*/

RecordFile::RecordFile()
{
    /*PROTECTED REGION ID(RecordFile constructor) START*/
    /*PROTECTED REGION END*/
}

RecordFile::~RecordFile()
{
    /*PROTECTED REGION ID(RecordFile destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::RecordFile implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr RecordFile::eClassImpl() const
{
    return DataPackage::_instance()->getRecordFile();
}

