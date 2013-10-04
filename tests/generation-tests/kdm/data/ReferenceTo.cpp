
#include "ReferenceTo.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/ContentItem.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::ReferenceTo include) START*/
/*PROTECTED REGION END*/

ReferenceTo::ReferenceTo() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(ReferenceTo constructor) START*/
	/*PROTECTED REGION END*/
}

ReferenceTo::~ReferenceTo()
{
	/*PROTECTED REGION ID(ReferenceTo destructor) START*/
	/*PROTECTED REGION END*/
}

ReferenceTo::to_t ReferenceTo::getTo() const
{
	return e4c::returned(m_to);
}

void ReferenceTo::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

ReferenceTo::from_t ReferenceTo::getFrom() const
{
	return e4c::returned(m_from);
}

void ReferenceTo::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::data::ReferenceTo implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ReferenceTo::eClassImpl() const
{
	return DataPackage::_instance()->getReferenceTo();
}
 
