
#include "DatatypeOf.hpp"
#include <kdm/code/Datatype.hpp>
#include <kdm/data/ComplexContentType.hpp>

using namespace kdm::data;

DatatypeOf::DatatypeOf() : 
	m_to(),
    m_from()
{
}

DatatypeOf::~DatatypeOf()
{
}

DatatypeOf::to_t DatatypeOf::getTo() const
{
	return e4c::returned(m_to);
}

DatatypeOf::from_t DatatypeOf::getFrom() const
{
	return e4c::returned(m_from);
}



