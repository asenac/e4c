
#include "BehaviorUnit.hpp"
#include <kdm/conceptual/ConceptualPackage.hpp>

using namespace kdm::conceptual;

/*PROTECTED REGION ID(kdm::conceptual::BehaviorUnit include) START*/
/*PROTECTED REGION END*/

BehaviorUnit::BehaviorUnit()
{
    /*PROTECTED REGION ID(BehaviorUnit constructor) START*/
    /*PROTECTED REGION END*/
}

BehaviorUnit::~BehaviorUnit()
{
    /*PROTECTED REGION ID(BehaviorUnit destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::conceptual::BehaviorUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr BehaviorUnit::eClassImpl() const
{
    return ConceptualPackage::_instance()->getBehaviorUnit();
}

