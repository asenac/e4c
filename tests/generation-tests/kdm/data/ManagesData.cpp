
#include "ManagesData.hpp"
#include <kdm/data/AbstractDataElement.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::data;

ManagesData::ManagesData() : 
	m_to(),
    m_from()
{
}

ManagesData::~ManagesData()
{
}

ManagesData::to_t ManagesData::getTo() const
{
	return e4c::returned(m_to);
}

ManagesData::from_t ManagesData::getFrom() const
{
	return e4c::returned(m_from);
}



