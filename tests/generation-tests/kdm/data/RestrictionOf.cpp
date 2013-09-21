
#include "RestrictionOf.hpp"
#include <kdm/data/ComplexContentType.hpp>

using namespace kdm::data;

RestrictionOf::RestrictionOf() : 
	m_to(),
    m_from()
{
}

RestrictionOf::~RestrictionOf()
{
}

RestrictionOf::to_t RestrictionOf::getTo() const
{
	return e4c::returned(m_to);
}

RestrictionOf::from_t RestrictionOf::getFrom() const
{
	return e4c::returned(m_from);
}



