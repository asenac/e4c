
#include "TermUnit.hpp"
#include <kdm/conceptual/ConceptualPackage.hpp>

using namespace kdm::conceptual;

/*PROTECTED REGION ID(kdm::conceptual::TermUnit include) START*/
/*PROTECTED REGION END*/

TermUnit::TermUnit()
{
	/*PROTECTED REGION ID(TermUnit constructor) START*/
	/*PROTECTED REGION END*/
}

TermUnit::~TermUnit()
{
	/*PROTECTED REGION ID(TermUnit destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::conceptual::TermUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TermUnit::eClassImpl() const
{
	return ConceptualPackage::_instance()->getTermUnit();
}
 
