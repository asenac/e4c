
#include "DataAction.hpp"
#include <kdm/action/ActionElement.hpp>
#include <kdm/data/DataEvent.hpp>

using namespace kdm::data;

DataAction::DataAction() : 
	m_kind(),
    m_implementation(),
    m_dataElement()
{
}

DataAction::~DataAction()
{
}

void DataAction::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

kind_t DataAction::getKind() const
{
	return m_kind;
}



