
#include "UIRelationship.hpp"
#include <kdm/core/KDMEntity.hpp>
#include <kdm/ui/AbstractUIElement.hpp>

using namespace kdm::ui;

UIRelationship::UIRelationship() : 
	m_to(),
    m_from()
{
}

UIRelationship::~UIRelationship()
{
}

UIRelationship::to_t UIRelationship::getTo() const
{
	return e4c::returned(m_to);
}

UIRelationship::from_t UIRelationship::getFrom() const
{
	return e4c::returned(m_from);
}



