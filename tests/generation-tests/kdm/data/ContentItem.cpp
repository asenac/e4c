
#include "ContentItem.hpp"
#include <kdm/data/ComplexContentType.hpp>
#include <kdm/data/AbstractContentElement.hpp>

using namespace kdm::data;

ContentItem::ContentItem() : 
	m_type(),
    m_contentElement()
{
}

ContentItem::~ContentItem()
{
}

ContentItem::type_t ContentItem::getType() const
{
	return e4c::returned(m_type);
}

ContentItem::contentElement_t ContentItem::getContentElement() const
{
	return e4c::returned(m_contentElement);
}



