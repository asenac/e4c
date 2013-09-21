
#include "AbstractElement.hpp"

using namespace xtext;

AbstractElement::AbstractElement() : 
	m_cardinality()
{
}

AbstractElement::~AbstractElement()
{
}

void AbstractElement::setCardinality(cardinality_t _cardinality)
{
	m_cardinality = _cardinality;;
}

AbstractElement::cardinality_t AbstractElement::getCardinality() const
{
	return m_cardinality;
}



