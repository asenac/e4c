
#include "ConceptualRole.hpp"
#include <kdm/conceptual/ConceptualPackage.hpp>
#include <kdm/conceptual/AbstractConceptualElement.hpp>

using namespace kdm::conceptual;

/*PROTECTED REGION ID(kdm::conceptual::ConceptualRole include) START*/
/*PROTECTED REGION END*/

ConceptualRole::ConceptualRole() :
    m_conceptualElement()
{
    /*PROTECTED REGION ID(ConceptualRole constructor) START*/
    /*PROTECTED REGION END*/
}

ConceptualRole::~ConceptualRole()
{
    /*PROTECTED REGION ID(ConceptualRole destructor) START*/
    /*PROTECTED REGION END*/
}

ConceptualRole::conceptualElement_t ConceptualRole::getConceptualElement() const
{
    return e4c::returned(m_conceptualElement);
}

void ConceptualRole::setConceptualElement(conceptualElement_t conceptualElement_)
{
    if (m_conceptualElement == conceptualElement_)
        return;
    m_conceptualElement = conceptualElement_;
}



/*PROTECTED REGION ID(kdm::conceptual::ConceptualRole implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ConceptualRole::eClassImpl() const
{
    return ConceptualPackage::_instance()->getConceptualRole();
}

