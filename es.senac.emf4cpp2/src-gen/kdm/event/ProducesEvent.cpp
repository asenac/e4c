
#include "kdm/event/ProducesEvent.hpp"

using namespace kdm::event;

ProducesEvent::ProducesEvent() : to(this), from(this)
{
}

ProducesEvent::~ProducesEvent()
{
}

