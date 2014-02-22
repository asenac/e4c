
#include "Index.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::Index include) START*/
/*PROTECTED REGION END*/

Index::Index()
{
    /*PROTECTED REGION ID(Index constructor) START*/
    /*PROTECTED REGION END*/
}

Index::~Index()
{
    /*PROTECTED REGION ID(Index destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::Index implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Index::eClassImpl() const
{
    return DataPackage::_instance()->getIndex();
}

