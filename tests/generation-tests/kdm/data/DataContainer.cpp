
#include "DataContainer.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/DataResource.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::DataContainer include) START*/
/*PROTECTED REGION END*/

DataContainer::DataContainer() : 
	m_dataElement()
{
	/*PROTECTED REGION ID(DataContainer constructor) START*/
	/*PROTECTED REGION END*/
}

DataContainer::~DataContainer()
{
	/*PROTECTED REGION ID(DataContainer destructor) START*/
	/*PROTECTED REGION END*/
}

DataContainer::dataElement_t DataContainer::getDataElement() const
{
	return e4c::returned(m_dataElement);
}


void DataContainer::addDataElement(kdm::data::DataResource_ptr dataElement_)
{
	m_dataElement.insert(std::unique_ptr < kdm::data::DataResource >(dataElement_));
}

void DataContainer::addAllDataElement(const dataElement_t& dataElement_)
{
	for (auto i = dataElement_.begin(); i != dataElement_.end(); i++)
		addDataElement(*i);
}



/*PROTECTED REGION ID(kdm::data::DataContainer implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DataContainer::eClassImpl() const
{
	return DataPackage::_instance()->getDataContainer();
}
 
