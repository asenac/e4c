
#include "GroupContent.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::GroupContent include) START*/
/*PROTECTED REGION END*/

GroupContent::GroupContent()
{
    /*PROTECTED REGION ID(GroupContent constructor) START*/
    /*PROTECTED REGION END*/
}

GroupContent::~GroupContent()
{
    /*PROTECTED REGION ID(GroupContent destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::GroupContent implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr GroupContent::eClassImpl() const
{
    return DataPackage::_instance()->getGroupContent();
}

