
#include "DataModel.hpp"
#include <kdm/data/AbstractDataElement.hpp>

using namespace kdm::data;

DataModel::DataModel() : 
	m_dataElement()
{
}

DataModel::~DataModel()
{
}

DataModel::dataElement_t DataModel::getDataElement() const
{
	return e4c::returned(m_dataElement);
}



