
#include "DataRelationship.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/data/AbstractDataElement.hpp>

using namespace kdm::data;

DataRelationship::DataRelationship() : 
	m_to(),
    m_from()
{
}

DataRelationship::~DataRelationship()
{
}

DataRelationship::to_t DataRelationship::getTo() const
{
	return e4c::returned(m_to);
}

DataRelationship::from_t DataRelationship::getFrom() const
{
	return e4c::returned(m_from);
}



