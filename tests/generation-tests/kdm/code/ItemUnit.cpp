
#include "ItemUnit.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::ItemUnit include) START*/
/*PROTECTED REGION END*/

ItemUnit::ItemUnit()
{
    /*PROTECTED REGION ID(ItemUnit constructor) START*/
    /*PROTECTED REGION END*/
}

ItemUnit::~ItemUnit()
{
    /*PROTECTED REGION ID(ItemUnit destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::ItemUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ItemUnit::eClassImpl() const
{
    return CodePackage::_instance()->getItemUnit();
}

