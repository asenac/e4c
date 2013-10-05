#include "UnionField.hpp"
#include <idlmm/IdlmmPackage.hpp>
#include <idlmm/Expression.hpp>

using namespace idlmm;

/*PROTECTED REGION ID(idlmm::UnionField include) START*/
/*PROTECTED REGION END*/

UnionField::UnionField() : 
	m_identifier(),
    m_label()
{
	/*PROTECTED REGION ID(UnionField constructor) START*/
	/*PROTECTED REGION END*/
}

UnionField::~UnionField()
{
	/*PROTECTED REGION ID(UnionField destructor) START*/
	/*PROTECTED REGION END*/
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
	assert(label_);
	m_label.push_back(std::unique_ptr < idlmm::Expression >(label_));
}

void UnionField::addAllLabel(const label_t& label_)
{
	for (auto i = label_.begin(); i != label_.end(); i++)
		addLabel(*i);
}

void UnionField::removeLabel(idlmm::Expression_ptr label_)
{
	assert(label_);
	e4c::remove(m_label, label_);
}

void UnionField::clearLabel()
{
	m_label.clear();
}



/*PROTECTED REGION ID(idlmm::UnionField implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr UnionField::eClassImpl() const
{
	return IdlmmPackage::_instance()->getUnionField();
}
 
