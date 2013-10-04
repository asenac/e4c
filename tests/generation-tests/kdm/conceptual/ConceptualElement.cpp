
#include "ConceptualElement.hpp"
#include <kdm/conceptual/ConceptualPackage.hpp>

using namespace kdm::conceptual;

/*PROTECTED REGION ID(kdm::conceptual::ConceptualElement include) START*/
/*PROTECTED REGION END*/

ConceptualElement::ConceptualElement()
{
	/*PROTECTED REGION ID(ConceptualElement constructor) START*/
	/*PROTECTED REGION END*/
}

ConceptualElement::~ConceptualElement()
{
	/*PROTECTED REGION ID(ConceptualElement destructor) START*/
	/*PROTECTED REGION END*/
}



/*PROTECTED REGION ID(kdm::conceptual::ConceptualElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ConceptualElement::eClassImpl() const
{
	return ConceptualPackage::_instance()->getConceptualElement();
}
 
