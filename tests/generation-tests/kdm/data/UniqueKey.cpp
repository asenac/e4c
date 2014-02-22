
#include "UniqueKey.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::UniqueKey include) START*/
/*PROTECTED REGION END*/

UniqueKey::UniqueKey()
{
    /*PROTECTED REGION ID(UniqueKey constructor) START*/
    /*PROTECTED REGION END*/
}

UniqueKey::~UniqueKey()
{
    /*PROTECTED REGION ID(UniqueKey destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::UniqueKey implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UniqueKey::eClassImpl() const
{
    return DataPackage::_instance()->getUniqueKey();
}

