
#include "DataEvent.hpp"

using namespace kdm::data;

DataEvent::DataEvent() : 
	m_kind()
{
}

DataEvent::~DataEvent()
{
}

void DataEvent::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

DataEvent::kind_t DataEvent::getKind() const
{
	return m_kind;
}



