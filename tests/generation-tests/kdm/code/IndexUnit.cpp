
#include "IndexUnit.hpp"
#include <kdm/code/CodePackage.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::IndexUnit include) START*/
/*PROTECTED REGION END*/

IndexUnit::IndexUnit()
{
    /*PROTECTED REGION ID(IndexUnit constructor) START*/
    /*PROTECTED REGION END*/
}

IndexUnit::~IndexUnit()
{
    /*PROTECTED REGION ID(IndexUnit destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::code::IndexUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr IndexUnit::eClassImpl() const
{
    return CodePackage::_instance()->getIndexUnit();
}

