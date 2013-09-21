
#include "Segment.hpp"
#include <kdm/kdm/Segment.hpp>
#include <kdm/kdm/KDMModel.hpp>

using namespace kdm::kdm;

Segment::Segment() : 
	m_segment(),
    m_model()
{
}

Segment::~Segment()
{
}

Segment::segment_t Segment::getSegment() const
{
	return e4c::returned(m_segment);
}

Segment::model_t Segment::getModel() const
{
	return e4c::returned(m_model);
}



