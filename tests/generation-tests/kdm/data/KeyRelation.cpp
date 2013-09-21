
#include "KeyRelation.hpp"
#include <kdm/data/UniqueKey.hpp>
#include <kdm/data/ReferenceKey.hpp>

using namespace kdm::data;

KeyRelation::KeyRelation() : 
	m_to(),
    m_from()
{
}

KeyRelation::~KeyRelation()
{
}

KeyRelation::to_t KeyRelation::getTo() const
{
	return e4c::returned(m_to);
}

KeyRelation::from_t KeyRelation::getFrom() const
{
	return e4c::returned(m_from);
}



