
#include "ConceptualContainer.hpp"
#include <kdm/conceptual/ConceptualPackage.hpp>
#include <kdm/conceptual/AbstractConceptualElement.hpp>

using namespace kdm::conceptual;

/*PROTECTED REGION ID(kdm::conceptual::ConceptualContainer include) START*/
/*PROTECTED REGION END*/

ConceptualContainer::ConceptualContainer() : 
	m_conceptualElement()
{
	/*PROTECTED REGION ID(ConceptualContainer constructor) START*/
	/*PROTECTED REGION END*/
}

ConceptualContainer::~ConceptualContainer()
{
	/*PROTECTED REGION ID(ConceptualContainer destructor) START*/
	/*PROTECTED REGION END*/
}

ConceptualContainer::conceptualElement_t ConceptualContainer::getConceptualElement() const
{
	return e4c::returned(m_conceptualElement);
}


void ConceptualContainer::addConceptualElement(kdm::conceptual::AbstractConceptualElement_ptr conceptualElement_)
{
	m_conceptualElement.insert(std::unique_ptr < kdm::conceptual::AbstractConceptualElement >(conceptualElement_));
}

void ConceptualContainer::addAllConceptualElement(const conceptualElement_t& conceptualElement_)
{
	for (auto i = conceptualElement_.begin(); i != conceptualElement_.end(); i++)
		addConceptualElement(*i);
}



/*PROTECTED REGION ID(kdm::conceptual::ConceptualContainer implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ConceptualContainer::eClassImpl() const
{
	return ConceptualPackage::_instance()->getConceptualContainer();
}
 
