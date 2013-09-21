#ifndef EMF_CPP_KDM_CORE_FWD_HPP
#define EMF_CPP_KDM_CORE_FWD_HPP


#include <e4c/mapping.hpp>

namespace kdm
{
namespace core
{


class CorePackage;
typedef CorePackage * CorePackage_ptr;
class CoreFactory;
typedef CoreFactory * CoreFactory_ptr;

// Data types

/*PROTECTED REGION ID(typedef_kdm::core::String) START*/
typedef int String;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_kdm::core::Integer) START*/
typedef int Integer;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_kdm::core::Boolean) START*/
typedef int Boolean;
/*PROTECTED REGION END*/


// Classes
class Element;
typedef Element* Element_ptr;
class ModelElement;
typedef ModelElement* ModelElement_ptr;
class KDMEntity;
typedef KDMEntity* KDMEntity_ptr;
class KDMRelationship;
typedef KDMRelationship* KDMRelationship_ptr;
class AggregatedRelationship;
typedef AggregatedRelationship* AggregatedRelationship_ptr;


// Structural features
struct Element__attribute_tag;
struct Element__annotation_tag;
struct ModelElement__stereotype_tag;
struct ModelElement__taggedValue_tag;
struct KDMEntity__name_tag;
struct AggregatedRelationship__from_tag;
struct AggregatedRelationship__to_tag;
struct AggregatedRelationship__relation_tag;
struct AggregatedRelationship__density_tag;


} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_FWD_HPP
