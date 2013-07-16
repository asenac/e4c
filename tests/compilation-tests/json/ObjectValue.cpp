
#include "ObjectValue.hpp"
#include <json/NVPair.hpp>

using namespace json;

ObjectValue::ObjectValue() : members(this)
{
}

ObjectValue::~ObjectValue()
{
}

