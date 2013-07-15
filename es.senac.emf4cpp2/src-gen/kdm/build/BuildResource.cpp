
#include "kdm/build/BuildResource.hpp"

using namespace kdm::build;

BuildResource::BuildResource() : implementation(this), groupedBuild(this), buildElement(this)
{
}

BuildResource::~BuildResource()
{
}

