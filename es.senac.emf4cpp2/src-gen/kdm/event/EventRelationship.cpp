
#include "kdm/event/EventRelationship.hpp"

using namespace kdm::event;

EventRelationship::EventRelationship() : to(this), from(this)
{
}

EventRelationship::~EventRelationship()
{
}

