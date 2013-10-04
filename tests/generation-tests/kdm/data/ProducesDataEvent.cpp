
#include "ProducesDataEvent.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/DataEvent.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::ProducesDataEvent include) START*/
/*PROTECTED REGION END*/

ProducesDataEvent::ProducesDataEvent() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(ProducesDataEvent constructor) START*/
	/*PROTECTED REGION END*/
}

ProducesDataEvent::~ProducesDataEvent()
{
	/*PROTECTED REGION ID(ProducesDataEvent destructor) START*/
	/*PROTECTED REGION END*/
}

ProducesDataEvent::to_t ProducesDataEvent::getTo() const
{
	return e4c::returned(m_to);
}

void ProducesDataEvent::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

ProducesDataEvent::from_t ProducesDataEvent::getFrom() const
{
	return e4c::returned(m_from);
}

void ProducesDataEvent::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::data::ProducesDataEvent implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ProducesDataEvent::eClassImpl() const
{
	return DataPackage::_instance()->getProducesDataEvent();
}
 
