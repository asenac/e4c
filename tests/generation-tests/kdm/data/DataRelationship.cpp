
#include "DataRelationship.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/data/AbstractDataElement.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::DataRelationship include) START*/
/*PROTECTED REGION END*/

DataRelationship::DataRelationship() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(DataRelationship constructor) START*/
	/*PROTECTED REGION END*/
}

DataRelationship::~DataRelationship()
{
	/*PROTECTED REGION ID(DataRelationship destructor) START*/
	/*PROTECTED REGION END*/
}

DataRelationship::to_t DataRelationship::getTo() const
{
	return e4c::returned(m_to);
}

void DataRelationship::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

DataRelationship::from_t DataRelationship::getFrom() const
{
	return e4c::returned(m_from);
}

void DataRelationship::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::data::DataRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DataRelationship::eClassImpl() const
{
	return DataPackage::_instance()->getDataRelationship();
}
 
