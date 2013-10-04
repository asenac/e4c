
#include "KDMRelationship.hpp"
#include <kdm/core/CorePackage.hpp>

using namespace kdm::core;

/*PROTECTED REGION ID(kdm::core::KDMRelationship include) START*/
/*PROTECTED REGION END*/

KDMRelationship::KDMRelationship()
{
	/*PROTECTED REGION ID(KDMRelationship constructor) START*/
	/*PROTECTED REGION END*/
}

KDMRelationship::~KDMRelationship()
{
	/*PROTECTED REGION ID(KDMRelationship destructor) START*/
	/*PROTECTED REGION END*/
}


kdm::core::KDMEntity_ptr KDMRelationship::getTo()
{
	/*PROTECTED REGION ID(kdm::core::KDMEntity_ptr KDMRelationship::getTo) START*/
	return kdm::core::KDMEntity_ptr();
	/*PROTECTED REGION END*/
}

kdm::core::KDMEntity_ptr KDMRelationship::getFrom()
{
	/*PROTECTED REGION ID(kdm::core::KDMEntity_ptr KDMRelationship::getFrom) START*/
	return kdm::core::KDMEntity_ptr();
	/*PROTECTED REGION END*/
}


/*PROTECTED REGION ID(kdm::core::KDMRelationship implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr KDMRelationship::eClassImpl() const
{
	return CorePackage::_instance()->getKDMRelationship();
}
 
