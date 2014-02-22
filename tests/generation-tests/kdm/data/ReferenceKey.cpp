
#include "ReferenceKey.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::ReferenceKey include) START*/
/*PROTECTED REGION END*/

ReferenceKey::ReferenceKey()
{
    /*PROTECTED REGION ID(ReferenceKey constructor) START*/
    /*PROTECTED REGION END*/
}

ReferenceKey::~ReferenceKey()
{
    /*PROTECTED REGION ID(ReferenceKey destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::ReferenceKey implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ReferenceKey::eClassImpl() const
{
    return DataPackage::_instance()->getReferenceKey();
}

