
#include "UsesType.hpp"
#include <kdm/code/Datatype.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::action;

UsesType::UsesType() : 
	m_to(),
    m_from()
{
}

UsesType::~UsesType()
{
}

UsesType::to_t UsesType::getTo() const
{
	return e4c::returned(m_to);
}

UsesType::from_t UsesType::getFrom() const
{
	return e4c::returned(m_from);
}



