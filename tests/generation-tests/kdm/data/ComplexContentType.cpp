
#include "ComplexContentType.hpp"
#include <kdm/data/AbstractContentElement.hpp>

using namespace kdm::data;

ComplexContentType::ComplexContentType() : 
	m_contentElement()
{
}

ComplexContentType::~ComplexContentType()
{
}

ComplexContentType::contentElement_t ComplexContentType::getContentElement() const
{
	return e4c::returned(m_contentElement);
}



