
#include "DataContainer.hpp"
#include <kdm/data/DataResource.hpp>

using namespace kdm::data;

DataContainer::DataContainer() : 
	m_dataElement()
{
}

DataContainer::~DataContainer()
{
}

DataContainer::dataElement_t DataContainer::getDataElement() const
{
	return e4c::returned(m_dataElement);
}



