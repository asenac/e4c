
#include "Catalog.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::Catalog include) START*/
/*PROTECTED REGION END*/

Catalog::Catalog()
{
    /*PROTECTED REGION ID(Catalog constructor) START*/
    /*PROTECTED REGION END*/
}

Catalog::~Catalog()
{
    /*PROTECTED REGION ID(Catalog destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::Catalog implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Catalog::eClassImpl() const
{
    return DataPackage::_instance()->getCatalog();
}

