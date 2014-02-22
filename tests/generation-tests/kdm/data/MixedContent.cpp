
#include "MixedContent.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::MixedContent include) START*/
/*PROTECTED REGION END*/

MixedContent::MixedContent()
{
    /*PROTECTED REGION ID(MixedContent constructor) START*/
    /*PROTECTED REGION END*/
}

MixedContent::~MixedContent()
{
    /*PROTECTED REGION ID(MixedContent destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::MixedContent implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr MixedContent::eClassImpl() const
{
    return DataPackage::_instance()->getMixedContent();
}

