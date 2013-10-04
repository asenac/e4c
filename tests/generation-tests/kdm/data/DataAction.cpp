
#include "DataAction.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/action/ActionElement.hpp>
#include <kdm/data/DataEvent.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::DataAction include) START*/
/*PROTECTED REGION END*/

DataAction::DataAction() : 
	m_kind(),
    m_implementation(),
    m_dataElement()
{
	/*PROTECTED REGION ID(DataAction constructor) START*/
	/*PROTECTED REGION END*/
}

DataAction::~DataAction()
{
	/*PROTECTED REGION ID(DataAction destructor) START*/
	/*PROTECTED REGION END*/
}

void DataAction::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

DataAction::kind_t DataAction::getKind() const
{
	return m_kind;
}

DataAction::implementation_t DataAction::getImplementation() const
{
	return e4c::returned(m_implementation);
}

void DataAction::addImplementation(kdm::action::ActionElement_ptr implementation_)
{
	if (e4c::contains(m_implementation, implementation_))
		return;
	m_implementation.insert(implementation_);
}

void DataAction::addAllImplementation(const implementation_t& implementation_)
{
	for (auto i = implementation_.begin(); i != implementation_.end(); i++)
		addImplementation(*i);
}

DataAction::dataElement_t DataAction::getDataElement() const
{
	return e4c::returned(m_dataElement);
}


void DataAction::addDataElement(kdm::data::DataEvent_ptr dataElement_)
{
	m_dataElement.insert(std::unique_ptr < kdm::data::DataEvent >(dataElement_));
}

void DataAction::addAllDataElement(const dataElement_t& dataElement_)
{
	for (auto i = dataElement_.begin(); i != dataElement_.end(); i++)
		addDataElement(*i);
}



/*PROTECTED REGION ID(kdm::data::DataAction implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DataAction::eClassImpl() const
{
	return DataPackage::_instance()->getDataAction();
}
 
