
#include "ContentItem.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/ComplexContentType.hpp>
#include <kdm/data/AbstractContentElement.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::ContentItem include) START*/
/*PROTECTED REGION END*/

ContentItem::ContentItem() : 
	m_type(),
    m_contentElement()
{
	/*PROTECTED REGION ID(ContentItem constructor) START*/
	/*PROTECTED REGION END*/
}

ContentItem::~ContentItem()
{
	/*PROTECTED REGION ID(ContentItem destructor) START*/
	/*PROTECTED REGION END*/
}

ContentItem::type_t ContentItem::getType() const
{
	return e4c::returned(m_type);
}

void ContentItem::setType(type_t type_)
{
	if (m_type == type_)
		return;
	m_type = type_;
}

ContentItem::contentElement_t ContentItem::getContentElement() const
{
	return e4c::returned(m_contentElement);
}


void ContentItem::addContentElement(kdm::data::AbstractContentElement_ptr contentElement_)
{
	m_contentElement.insert(std::unique_ptr < kdm::data::AbstractContentElement >(contentElement_));
}

void ContentItem::addAllContentElement(const contentElement_t& contentElement_)
{
	for (auto i = contentElement_.begin(); i != contentElement_.end(); i++)
		addContentElement(*i);
}



/*PROTECTED REGION ID(kdm::data::ContentItem implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ContentItem::eClassImpl() const
{
	return DataPackage::_instance()->getContentItem();
}
 
