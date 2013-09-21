
#include "WritesColumnSet.hpp"
#include <kdm/data/ColumnSet.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::data;

WritesColumnSet::WritesColumnSet() : 
	m_to(),
    m_from()
{
}

WritesColumnSet::~WritesColumnSet()
{
}

WritesColumnSet::to_t WritesColumnSet::getTo() const
{
	return e4c::returned(m_to);
}

WritesColumnSet::from_t WritesColumnSet::getFrom() const
{
	return e4c::returned(m_from);
}



