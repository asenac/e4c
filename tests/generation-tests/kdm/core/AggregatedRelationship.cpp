
#include "AggregatedRelationship.hpp"
#include <kdm/core/CorePackage.hpp>
#include <kdm/core/KDMEntity.hpp>
#include <kdm/core/KDMRelationship.hpp>

using namespace kdm::core;

/*PROTECTED REGION ID(kdm::core::AggregatedRelationship include) START*/
/*PROTECTED REGION END*/

AggregatedRelationship::AggregatedRelationship() : 
	m_from(),
    m_to(),
    m_relation(),
    m_density()
{
	/*PROTECTED REGION ID(AggregatedRelationship constructor) START*/
	/*PROTECTED REGION END*/
}

AggregatedRelationship::~AggregatedRelationship()
{
	/*PROTECTED REGION ID(AggregatedRelationship destructor) START*/
	/*PROTECTED REGION END*/
}

AggregatedRelationship::from_t AggregatedRelationship::getFrom() const
{
	return e4c::returned(m_from);
}

void AggregatedRelationship::setFrom(from_t from_)
{
	if (m_from == from_)
		return;
	m_from = from_;
}

AggregatedRelationship::to_t AggregatedRelationship::getTo() const
{
	return e4c::returned(m_to);
}

void AggregatedRelationship::setTo(to_t to_)
{
	if (m_to == to_)
		return;
	m_to = to_;
}

AggregatedRelationship::relation_t AggregatedRelationship::getRelation() const
{
	return e4c::returned(m_relation);
}

void AggregatedRelationship::addRelation(kdm::core::KDMRelationship_ptr relation_)
{
	if (e4c::contains(m_relation, relation_))
		return;
	m_relation.insert(relation_);
}

void AggregatedRelationship::addAllRelation(const relation_t& relation_)
{
	for (auto i = relation_.begin(); i != relation_.end(); i++)
		addRelation(*i);
}

void AggregatedRelationship::setDensity(density_t _density)
{
	m_density = _density;;
}

AggregatedRelationship::density_t AggregatedRelationship::getDensity() const
{
	return m_density;
}



/*PROTECTED REGION ID(kdm::core::AggregatedRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AggregatedRelationship::eClassImpl() const
{
	return CorePackage::_instance()->getAggregatedRelationship();
}
 
