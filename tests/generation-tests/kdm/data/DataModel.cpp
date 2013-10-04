
#include "DataModel.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/AbstractDataElement.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::DataModel include) START*/
/*PROTECTED REGION END*/

DataModel::DataModel() : 
	m_dataElement()
{
	/*PROTECTED REGION ID(DataModel constructor) START*/
	/*PROTECTED REGION END*/
}

DataModel::~DataModel()
{
	/*PROTECTED REGION ID(DataModel destructor) START*/
	/*PROTECTED REGION END*/
}

DataModel::dataElement_t DataModel::getDataElement() const
{
	return e4c::returned(m_dataElement);
}


void DataModel::addDataElement(kdm::data::AbstractDataElement_ptr dataElement_)
{
	m_dataElement.insert(std::unique_ptr < kdm::data::AbstractDataElement >(dataElement_));
}

void DataModel::addAllDataElement(const dataElement_t& dataElement_)
{
	for (auto i = dataElement_.begin(); i != dataElement_.end(); i++)
		addDataElement(*i);
}



/*PROTECTED REGION ID(kdm::data::DataModel implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DataModel::eClassImpl() const
{
	return DataPackage::_instance()->getDataModel();
}
 
