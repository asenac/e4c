
#include "SimpleContentType.hpp"
#include <kdm/data/ComplexContentType.hpp>

using namespace kdm::data;

SimpleContentType::SimpleContentType() : 
	m_type(),
    m_kind()
{
}

SimpleContentType::~SimpleContentType()
{
}

void SimpleContentType::setKind(kind_t _kind)
{
	m_kind = _kind;;
}

kind_t SimpleContentType::getKind() const
{
	return m_kind;
}



