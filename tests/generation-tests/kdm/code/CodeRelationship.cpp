
#include "CodeRelationship.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

CodeRelationship::CodeRelationship() : 
	m_to(),
    m_from()
{
}

CodeRelationship::~CodeRelationship()
{
}

CodeRelationship::to_t CodeRelationship::getTo() const
{
	return e4c::returned(m_to);
}

CodeRelationship::from_t CodeRelationship::getFrom() const
{
	return e4c::returned(m_from);
}



