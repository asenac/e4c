#ifndef EMF_CPP_KDM_STRUCTURE_PACKAGE_HPP
#define EMF_CPP_KDM_STRUCTURE_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/structure/fwd.hpp>

namespace kdm
{
namespace structure
{


class StructurePackage : public ::ecore::EPackage
{
public:
    static const StructurePackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_AbstractStructureElement() const;
 	e4c::tag_t getTag_Subsystem() const;
 	e4c::tag_t getTag_Layer() const;
 	e4c::tag_t getTag_StructureModel() const;
 	e4c::tag_t getTag_Component() const;
 	e4c::tag_t getTag_SoftwareSystem() const;
 	e4c::tag_t getTag_AbstractStructureRelationship() const;
 	e4c::tag_t getTag_StructureRelationship() const;
 	e4c::tag_t getTag_ArchitectureView() const;
 	e4c::tag_t getTag_StructureElement() const;
 
 	// Structural features
 	e4c::tag_t getTag_AbstractStructureElement__aggregated() const;
 	e4c::tag_t getTag_AbstractStructureElement__implementation() const;
 	e4c::tag_t getTag_AbstractStructureElement__structureElement() const;
 	e4c::tag_t getTag_AbstractStructureElement__structureRelationship() const;
 	e4c::tag_t getTag_StructureModel__structureElement() const;
 	e4c::tag_t getTag_StructureRelationship__to() const;
 	e4c::tag_t getTag_StructureRelationship__from() const;

protected:
    StructurePackage();
};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_PACKAGE_HPP
