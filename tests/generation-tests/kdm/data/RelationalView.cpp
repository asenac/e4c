
#include "RelationalView.hpp"
#include <kdm/data/DataPackage.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::RelationalView include) START*/
/*PROTECTED REGION END*/

RelationalView::RelationalView()
{
    /*PROTECTED REGION ID(RelationalView constructor) START*/
    /*PROTECTED REGION END*/
}

RelationalView::~RelationalView()
{
    /*PROTECTED REGION ID(RelationalView destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::data::RelationalView implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr RelationalView::eClassImpl() const
{
    return DataPackage::_instance()->getRelationalView();
}

