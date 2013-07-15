
#include "kdm/event/ConsumesEvent.hpp"

using namespace kdm::event;

ConsumesEvent::ConsumesEvent() : to(this), from(this)
{
}

ConsumesEvent::~ConsumesEvent()
{
}

