
#include "IndexElement.hpp"
#include <kdm/code/ItemUnit.hpp>

using namespace kdm::data;

IndexElement::IndexElement() : 
	m_implementation()
{
}

IndexElement::~IndexElement()
{
}

IndexElement::implementation_t IndexElement::getImplementation() const
{
	return e4c::returned(m_implementation);
}



