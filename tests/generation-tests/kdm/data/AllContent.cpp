
#include "AllContent.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::AllContent include) START*/
/*PROTECTED REGION END*/

AllContent::AllContent()
{
    /*PROTECTED REGION ID(AllContent constructor) START*/
    /*PROTECTED REGION END*/
}

AllContent::~AllContent()
{
    /*PROTECTED REGION ID(AllContent destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::AllContent implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AllContent::eClassImpl() const
{
    return DataPackage::_instance()->getAllContent();
}

