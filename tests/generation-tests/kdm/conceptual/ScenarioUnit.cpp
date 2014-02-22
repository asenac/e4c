
#include "ScenarioUnit.hpp"
#include <kdm/conceptual/ConceptualPackage.hpp>

using namespace kdm::conceptual;

/*PROTECTED REGION ID(kdm::conceptual::ScenarioUnit include) START*/
/*PROTECTED REGION END*/

ScenarioUnit::ScenarioUnit()
{
    /*PROTECTED REGION ID(ScenarioUnit constructor) START*/
    /*PROTECTED REGION END*/
}

ScenarioUnit::~ScenarioUnit()
{
    /*PROTECTED REGION ID(ScenarioUnit destructor) START*/
    /*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::conceptual::ScenarioUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ScenarioUnit::eClassImpl() const
{
    return ConceptualPackage::_instance()->getScenarioUnit();
}

