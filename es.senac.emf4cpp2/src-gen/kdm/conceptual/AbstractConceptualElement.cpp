
#include "kdm/conceptual/AbstractConceptualElement.hpp"

using namespace kdm::conceptual;

AbstractConceptualElement::AbstractConceptualElement() : source(this), implementation(this), conceptualRelation(this), abstraction(this)
{
}

AbstractConceptualElement::~AbstractConceptualElement()
{
}

