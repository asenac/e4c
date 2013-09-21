
#include "HasContent.hpp"
#include <kdm/data/AbstractDataElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::data;

HasContent::HasContent() : 
	m_to(),
    m_from()
{
}

HasContent::~HasContent()
{
}

HasContent::to_t HasContent::getTo() const
{
	return e4c::returned(m_to);
}

HasContent::from_t HasContent::getFrom() const
{
	return e4c::returned(m_from);
}



