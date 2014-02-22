
#include "ContentAttribute.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::ContentAttribute include) START*/
/*PROTECTED REGION END*/

ContentAttribute::ContentAttribute()
{
    /*PROTECTED REGION ID(ContentAttribute constructor) START*/
    /*PROTECTED REGION END*/
}

ContentAttribute::~ContentAttribute()
{
    /*PROTECTED REGION ID(ContentAttribute destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::ContentAttribute implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ContentAttribute::eClassImpl() const
{
    return DataPackage::_instance()->getContentAttribute();
}

