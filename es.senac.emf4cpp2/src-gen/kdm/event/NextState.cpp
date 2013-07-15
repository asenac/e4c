
#include "kdm/event/NextState.hpp"

using namespace kdm::event;

NextState::NextState() : to(this), from(this)
{
}

NextState::~NextState()
{
}

