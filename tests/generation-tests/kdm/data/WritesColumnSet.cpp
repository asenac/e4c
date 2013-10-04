
#include "WritesColumnSet.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/data/ColumnSet.hpp>
#include <kdm/action/ActionElement.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::WritesColumnSet include) START*/
/*PROTECTED REGION END*/

WritesColumnSet::WritesColumnSet() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(WritesColumnSet constructor) START*/
	/*PROTECTED REGION END*/
}

WritesColumnSet::~WritesColumnSet()
{
	/*PROTECTED REGION ID(WritesColumnSet destructor) START*/
	/*PROTECTED REGION END*/
}

WritesColumnSet::to_t WritesColumnSet::getTo() const
{
	return e4c::returned(m_to);
}

void WritesColumnSet::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

WritesColumnSet::from_t WritesColumnSet::getFrom() const
{
	return e4c::returned(m_from);
}

void WritesColumnSet::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::data::WritesColumnSet implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr WritesColumnSet::eClassImpl() const
{
	return DataPackage::_instance()->getWritesColumnSet();
}
 
