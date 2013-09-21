
#include "TypedBy.hpp"
#include <kdm/data/ComplexContentType.hpp>
#include <kdm/data/ContentItem.hpp>

using namespace kdm::data;

TypedBy::TypedBy() : 
	m_to(),
    m_from()
{
}

TypedBy::~TypedBy()
{
}

TypedBy::to_t TypedBy::getTo() const
{
	return e4c::returned(m_to);
}

TypedBy::from_t TypedBy::getFrom() const
{
	return e4c::returned(m_from);
}



