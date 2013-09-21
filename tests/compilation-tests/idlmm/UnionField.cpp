
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

UnionField::identifier_t UnionField::getIdentifier() const
{
	return m_identifier;
}

UnionField::label_t UnionField::getLabel() const
{
	return e4c::returned(m_label);
}

void UnionField::addLabel(idlmm::Expression_ptr label_)
{
	m_label.push_back(std::unique_ptr < idlmm::Expression >(label_));
}




