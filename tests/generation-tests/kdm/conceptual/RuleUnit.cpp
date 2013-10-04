
#include "RuleUnit.hpp"
#include <kdm/conceptual/ConceptualPackage.hpp>

using namespace kdm::conceptual;

/*PROTECTED REGION ID(kdm::conceptual::RuleUnit include) START*/
/*PROTECTED REGION END*/

RuleUnit::RuleUnit()
{
	/*PROTECTED REGION ID(RuleUnit constructor) START*/
	/*PROTECTED REGION END*/
}

RuleUnit::~RuleUnit()
{
	/*PROTECTED REGION ID(RuleUnit destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::conceptual::RuleUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr RuleUnit::eClassImpl() const
{
	return ConceptualPackage::_instance()->getRuleUnit();
}
 
