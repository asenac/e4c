
#include "ReferenceTo.hpp"
#include <kdm/data/ContentItem.hpp>

using namespace kdm::data;

ReferenceTo::ReferenceTo() : 
	m_to(),
    m_from()
{
}

ReferenceTo::~ReferenceTo()
{
}

ReferenceTo::to_t ReferenceTo::getTo() const
{
	return e4c::returned(m_to);
}

ReferenceTo::from_t ReferenceTo::getFrom() const
{
	return e4c::returned(m_from);
}



