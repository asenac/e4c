
#include "FactUnit.hpp"
#include <kdm/conceptual/ConceptualPackage.hpp>

using namespace kdm::conceptual;

/*PROTECTED REGION ID(kdm::conceptual::FactUnit include) START*/
/*PROTECTED REGION END*/

FactUnit::FactUnit()
{
    /*PROTECTED REGION ID(FactUnit constructor) START*/
    /*PROTECTED REGION END*/
}

FactUnit::~FactUnit()
{
    /*PROTECTED REGION ID(FactUnit destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::conceptual::FactUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr FactUnit::eClassImpl() const
{
    return ConceptualPackage::_instance()->getFactUnit();
}

