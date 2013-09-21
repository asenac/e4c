
#include "TagDefinition.hpp"

using namespace kdm::kdm;

TagDefinition::TagDefinition() : 
	m_tag(),
    m_type()
{
}

TagDefinition::~TagDefinition()
{
}

void TagDefinition::setTag(tag_t _tag)
{
	m_tag = _tag;;
}

TagDefinition::tag_t TagDefinition::getTag() const
{
	return m_tag;
}

void TagDefinition::setType(type_t _type)
{
	m_type = _type;;
}

TagDefinition::type_t TagDefinition::getType() const
{
	return m_type;
}



