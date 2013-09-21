
#include "ReadsColumnSet.hpp"
#include <kdm/data/ColumnSet.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::data;

ReadsColumnSet::ReadsColumnSet() : 
	m_to(),
    m_from()
{
}

ReadsColumnSet::~ReadsColumnSet()
{
}

ReadsColumnSet::to_t ReadsColumnSet::getTo() const
{
	return e4c::returned(m_to);
}

ReadsColumnSet::from_t ReadsColumnSet::getFrom() const
{
	return e4c::returned(m_from);
}



