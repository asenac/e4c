
#include "ObjectValue.hpp"
#include <json/NVPair.hpp>

using namespace json;

ObjectValue::ObjectValue() : 
	m_members()
{
}

ObjectValue::~ObjectValue()
{
}

ObjectValue::members_t ObjectValue::getMembers() const
{
	return e4c::returned(m_members);
}



