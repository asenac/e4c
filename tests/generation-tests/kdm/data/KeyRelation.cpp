
#include "KeyRelation.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/UniqueKey.hpp>
#include <kdm/data/ReferenceKey.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::KeyRelation include) START*/
/*PROTECTED REGION END*/

KeyRelation::KeyRelation() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(KeyRelation constructor) START*/
	/*PROTECTED REGION END*/
}

KeyRelation::~KeyRelation()
{
	/*PROTECTED REGION ID(KeyRelation destructor) START*/
	/*PROTECTED REGION END*/
}

KeyRelation::to_t KeyRelation::getTo() const
{
	return e4c::returned(m_to);
}

void KeyRelation::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

KeyRelation::from_t KeyRelation::getFrom() const
{
	return e4c::returned(m_from);
}

void KeyRelation::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::data::KeyRelation implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr KeyRelation::eClassImpl() const
{
	return DataPackage::_instance()->getKeyRelation();
}
 
