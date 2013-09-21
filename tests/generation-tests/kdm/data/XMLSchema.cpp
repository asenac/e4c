
#include "XMLSchema.hpp"
#include <kdm/data/AbstractContentElement.hpp>

using namespace kdm::data;

XMLSchema::XMLSchema() : 
	m_contentElement()
{
}

XMLSchema::~XMLSchema()
{
}

XMLSchema::contentElement_t XMLSchema::getContentElement() const
{
	return e4c::returned(m_contentElement);
}



