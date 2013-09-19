
#include "UnionField.hpp"
#include <idlmm/Expression.hpp>

using namespace idlmm;

UnionField::UnionField() : 
	m_identifier(),
    m_label()
{
}

UnionField::~UnionField()
{
}

void UnionField::setIdentifier(identifier_t _identifier)
{
	m_identifier = _identifier;;
}

identifier_t UnionField::getIdentifier() const
{
	return m_identifier;
}



