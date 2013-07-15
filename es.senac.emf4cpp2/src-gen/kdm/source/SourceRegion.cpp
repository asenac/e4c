
#include "kdm/source/SourceRegion.hpp"

using namespace kdm::source;

SourceRegion::SourceRegion() : file(this), startLine(this), startPosition(this), endLine(this), endPosition(this), language(this), path(this)
{
}

SourceRegion::~SourceRegion()
{
}

