
#ifndef EMF_CPP_KDM_STRUCTURE_FWD_HPP
#define EMF_CPP_KDM_STRUCTURE_FWD_HPP

#include <emf4cpp2/emf4cpp2.hpp>


namespace kdm
{
namespace structure
{


class StructurePackage;
typedef StructurePackage * StructurePackage_ptr;
class StructureFactory;
typedef StructureFactory * StructureFactory_ptr;

// Data types


// Classes
class AbstractStructureElement;
typedef AbstractStructureElement* AbstractStructureElement_ptr;
class Subsystem;
typedef Subsystem* Subsystem_ptr;
class Layer;
typedef Layer* Layer_ptr;
class StructureModel;
typedef StructureModel* StructureModel_ptr;
class Component;
typedef Component* Component_ptr;
class SoftwareSystem;
typedef SoftwareSystem* SoftwareSystem_ptr;
class AbstractStructureRelationship;
typedef AbstractStructureRelationship* AbstractStructureRelationship_ptr;
class StructureRelationship;
typedef StructureRelationship* StructureRelationship_ptr;
class ArchitectureView;
typedef ArchitectureView* ArchitectureView_ptr;
class StructureElement;
typedef StructureElement* StructureElement_ptr;


// Structural features
struct AbstractStructureElement__aggregated_tag;
struct AbstractStructureElement__implementation_tag;
struct AbstractStructureElement__structureElement_tag;
struct AbstractStructureElement__structureRelationship_tag;
struct StructureModel__structureElement_tag;
struct StructureRelationship__to_tag;
struct StructureRelationship__from_tag;


} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_FWD_HPP
