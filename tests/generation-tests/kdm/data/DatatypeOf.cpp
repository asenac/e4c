
#include "DatatypeOf.hpp"
#include <kdm/data/DataPackage.hpp>
#include <kdm/code/Datatype.hpp>
#include <kdm/data/ComplexContentType.hpp>

using namespace kdm::data;

/*PROTECTED REGION ID(kdm::data::DatatypeOf include) START*/
/*PROTECTED REGION END*/

DatatypeOf::DatatypeOf() : 
	m_to(),
    m_from()
{
	/*PROTECTED REGION ID(DatatypeOf constructor) START*/
	/*PROTECTED REGION END*/
}

DatatypeOf::~DatatypeOf()
{
	/*PROTECTED REGION ID(DatatypeOf destructor) START*/
	/*PROTECTED REGION END*/
}

DatatypeOf::to_t DatatypeOf::getTo() const
{
	return e4c::returned(m_to);
}

void DatatypeOf::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

DatatypeOf::from_t DatatypeOf::getFrom() const
{
	return e4c::returned(m_from);
}

void DatatypeOf::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}



/*PROTECTED REGION ID(kdm::data::DatatypeOf implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DatatypeOf::eClassImpl() const
{
	return DataPackage::_instance()->getDatatypeOf();
}
 
