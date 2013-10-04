
#include "ConceptualModel.hpp"
#include <kdm/conceptual/ConceptualPackage.hpp>
#include <kdm/conceptual/AbstractConceptualElement.hpp>

using namespace kdm::conceptual;

/*PROTECTED REGION ID(kdm::conceptual::ConceptualModel include) START*/
/*PROTECTED REGION END*/

ConceptualModel::ConceptualModel() : 
	m_conceptualElement()
{
	/*PROTECTED REGION ID(ConceptualModel constructor) START*/
	/*PROTECTED REGION END*/
}

ConceptualModel::~ConceptualModel()
{
	/*PROTECTED REGION ID(ConceptualModel destructor) START*/
	/*PROTECTED REGION END*/
}

ConceptualModel::conceptualElement_t ConceptualModel::getConceptualElement() const
{
	return e4c::returned(m_conceptualElement);
}


void ConceptualModel::addConceptualElement(kdm::conceptual::AbstractConceptualElement_ptr conceptualElement_)
{
	m_conceptualElement.insert(std::unique_ptr < kdm::conceptual::AbstractConceptualElement >(conceptualElement_));
}

void ConceptualModel::addAllConceptualElement(const conceptualElement_t& conceptualElement_)
{
	for (auto i = conceptualElement_.begin(); i != conceptualElement_.end(); i++)
		addConceptualElement(*i);
}



/*PROTECTED REGION ID(kdm::conceptual::ConceptualModel implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ConceptualModel::eClassImpl() const
{
	return ConceptualPackage::_instance()->getConceptualModel();
}
 
