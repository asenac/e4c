
#include "Segment.hpp"
#include <kdm/kdm/KdmPackage.hpp>
#include <kdm/kdm/Segment.hpp>
#include <kdm/kdm/KDMModel.hpp>

using namespace kdm::kdm;

/*PROTECTED REGION ID(kdm::kdm::Segment include) START*/
/*PROTECTED REGION END*/

Segment::Segment() : 
	m_segment(),
    m_model()
{
	/*PROTECTED REGION ID(Segment constructor) START*/
	/*PROTECTED REGION END*/
}

Segment::~Segment()
{
	/*PROTECTED REGION ID(Segment destructor) START*/
	/*PROTECTED REGION END*/
}

Segment::segment_t Segment::getSegment() const
{
	return e4c::returned(m_segment);
}


void Segment::addSegment(kdm::kdm::Segment_ptr segment_)
{
	m_segment.insert(std::unique_ptr < kdm::kdm::Segment >(segment_));
}

void Segment::addAllSegment(const segment_t& segment_)
{
	for (auto i = segment_.begin(); i != segment_.end(); i++)
		addSegment(*i);
}

Segment::model_t Segment::getModel() const
{
	return e4c::returned(m_model);
}


void Segment::addModel(kdm::kdm::KDMModel_ptr model_)
{
	m_model.insert(std::unique_ptr < kdm::kdm::KDMModel >(model_));
}

void Segment::addAllModel(const model_t& model_)
{
	for (auto i = model_.begin(); i != model_.end(); i++)
		addModel(*i);
}



/*PROTECTED REGION ID(kdm::kdm::Segment implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Segment::eClassImpl() const
{
	return KdmPackage::_instance()->getSegment();
}
 
