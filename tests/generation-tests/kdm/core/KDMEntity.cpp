
#include "KDMEntity.hpp"
#include <kdm/core/CorePackage.hpp>

using namespace kdm::core;

/*PROTECTED REGION ID(kdm::core::KDMEntity include) START*/
/*PROTECTED REGION END*/

KDMEntity::KDMEntity() : 
	m_name()
{
	/*PROTECTED REGION ID(KDMEntity constructor) START*/
	/*PROTECTED REGION END*/
}

KDMEntity::~KDMEntity()
{
	/*PROTECTED REGION ID(KDMEntity destructor) START*/
	/*PROTECTED REGION END*/
}

void KDMEntity::setName(name_t _name)
{
	m_name = _name;;
}

KDMEntity::name_t KDMEntity::getName() const
{
	return m_name;
}


void KDMEntity::createAggregation(kdm::core::KDMEntity_ptr otherEntity)
{
	/*PROTECTED REGION ID(void KDMEntity::createAggregationkdm::core::KDMEntity_ptr otherEntity) START*/
	/*PROTECTED REGION END*/
}

void KDMEntity::deleteAggregation(kdm::core::AggregatedRelationship_ptr aggregation)
{
	/*PROTECTED REGION ID(void KDMEntity::deleteAggregationkdm::core::AggregatedRelationship_ptr aggregation) START*/
	/*PROTECTED REGION END*/
}

kdm::core::KDMRelationship_ptr KDMEntity::getInbound()
{
	/*PROTECTED REGION ID(kdm::core::KDMRelationship_ptr KDMEntity::getInbound) START*/
	return kdm::core::KDMRelationship_ptr();
	/*PROTECTED REGION END*/
}

kdm::core::KDMRelationship_ptr KDMEntity::getOutbound()
{
	/*PROTECTED REGION ID(kdm::core::KDMRelationship_ptr KDMEntity::getOutbound) START*/
	return kdm::core::KDMRelationship_ptr();
	/*PROTECTED REGION END*/
}

kdm::core::KDMRelationship_ptr KDMEntity::getOwnedRelation()
{
	/*PROTECTED REGION ID(kdm::core::KDMRelationship_ptr KDMEntity::getOwnedRelation) START*/
	return kdm::core::KDMRelationship_ptr();
	/*PROTECTED REGION END*/
}

kdm::core::AggregatedRelationship_ptr KDMEntity::getInAggregated()
{
	/*PROTECTED REGION ID(kdm::core::AggregatedRelationship_ptr KDMEntity::getInAggregated) START*/
	return kdm::core::AggregatedRelationship_ptr();
	/*PROTECTED REGION END*/
}

kdm::core::AggregatedRelationship_ptr KDMEntity::getOutAggregated()
{
	/*PROTECTED REGION ID(kdm::core::AggregatedRelationship_ptr KDMEntity::getOutAggregated) START*/
	return kdm::core::AggregatedRelationship_ptr();
	/*PROTECTED REGION END*/
}

kdm::core::KDMEntity_ptr KDMEntity::getOwner()
{
	/*PROTECTED REGION ID(kdm::core::KDMEntity_ptr KDMEntity::getOwner) START*/
	return kdm::core::KDMEntity_ptr();
	/*PROTECTED REGION END*/
}

kdm::core::KDMEntity_ptr KDMEntity::getOwnedElement()
{
	/*PROTECTED REGION ID(kdm::core::KDMEntity_ptr KDMEntity::getOwnedElement) START*/
	return kdm::core::KDMEntity_ptr();
	/*PROTECTED REGION END*/
}

kdm::core::KDMEntity_ptr KDMEntity::getGroup()
{
	/*PROTECTED REGION ID(kdm::core::KDMEntity_ptr KDMEntity::getGroup) START*/
	return kdm::core::KDMEntity_ptr();
	/*PROTECTED REGION END*/
}

kdm::core::KDMEntity_ptr KDMEntity::getGroupedElement()
{
	/*PROTECTED REGION ID(kdm::core::KDMEntity_ptr KDMEntity::getGroupedElement) START*/
	return kdm::core::KDMEntity_ptr();
	/*PROTECTED REGION END*/
}

kdm::kdm::KDMModel_ptr KDMEntity::getModel()
{
	/*PROTECTED REGION ID(kdm::kdm::KDMModel_ptr KDMEntity::getModel) START*/
	return kdm::kdm::KDMModel_ptr();
	/*PROTECTED REGION END*/
}


/*PROTECTED REGION ID(kdm::core::KDMEntity implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr KDMEntity::eClassImpl() const
{
	return CorePackage::_instance()->getKDMEntity();
}
 
