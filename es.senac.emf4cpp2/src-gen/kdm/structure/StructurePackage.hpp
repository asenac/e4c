#ifndef EMF_CPP_KDM_STRUCTURE_PACKAGE_HPP
#define EMF_CPP_KDM_STRUCTURE_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/structure/fwd.hpp>

namespace kdm
{
namespace structure
{


class StructurePackage : public ::ecore::EPackage
{
public:
    static StructurePackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_AbstractStructureElement();
 	e4c::tag_t getTag_Subsystem();
 	e4c::tag_t getTag_Layer();
 	e4c::tag_t getTag_StructureModel();
 	e4c::tag_t getTag_Component();
 	e4c::tag_t getTag_SoftwareSystem();
 	e4c::tag_t getTag_AbstractStructureRelationship();
 	e4c::tag_t getTag_StructureRelationship();
 	e4c::tag_t getTag_ArchitectureView();
 	e4c::tag_t getTag_StructureElement();
 
 	// Structural features
 	e4c::tag_t getTag_AbstractStructureElement__aggregated();
 	e4c::tag_t getTag_AbstractStructureElement__implementation();
 	e4c::tag_t getTag_AbstractStructureElement__structureElement();
 	e4c::tag_t getTag_AbstractStructureElement__structureRelationship();
 	e4c::tag_t getTag_StructureModel__structureElement();
 	e4c::tag_t getTag_StructureRelationship__to();
 	e4c::tag_t getTag_StructureRelationship__from();

protected:
    StructurePackage();
};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_PACKAGE_HPP
