
#include "kdm/data/DataAction.hpp"

using namespace kdm::data;

DataAction::DataAction() : kind(this), implementation(this), dataElement(this)
{
}

DataAction::~DataAction()
{
}

