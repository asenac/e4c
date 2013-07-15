
#include "kdm/action/ActionRelationship.hpp"

using namespace kdm::action;

ActionRelationship::ActionRelationship() : to(this), from(this)
{
}

ActionRelationship::~ActionRelationship()
{
}

