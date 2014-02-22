#ifndef EMF_CPP_KDM_STRUCTURE_PACKAGE_HPP
#define EMF_CPP_KDM_STRUCTURE_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/structure/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace kdm
{
namespace structure
{


class StructurePackage : public ::ecore::EPackage
{
public:
    static const StructurePackage_ptr _instance();

     ::ecore::EClass_ptr getAbstractStructureElement() const;
     ::ecore::EClass_ptr getSubsystem() const;
     ::ecore::EClass_ptr getLayer() const;
     ::ecore::EClass_ptr getStructureModel() const;
     ::ecore::EClass_ptr getComponent() const;
     ::ecore::EClass_ptr getSoftwareSystem() const;
     ::ecore::EClass_ptr getAbstractStructureRelationship() const;
     ::ecore::EClass_ptr getStructureRelationship() const;
     ::ecore::EClass_ptr getArchitectureView() const;
     ::ecore::EClass_ptr getStructureElement() const;

     ::ecore::EReference_ptr getAbstractStructureElement__aggregated() const;
     ::ecore::EReference_ptr getAbstractStructureElement__implementation() const;
     ::ecore::EReference_ptr getAbstractStructureElement__structureElement() const;
     ::ecore::EReference_ptr getAbstractStructureElement__structureRelationship() const;
     ::ecore::EReference_ptr getStructureModel__structureElement() const;
     ::ecore::EReference_ptr getStructureRelationship__to() const;
     ::ecore::EReference_ptr getStructureRelationship__from() const;

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

     e4c::tag_t getTag_AbstractStructureElement__aggregated() const;
     e4c::tag_t getTag_AbstractStructureElement__implementation() const;
     e4c::tag_t getTag_AbstractStructureElement__structureElement() const;
     e4c::tag_t getTag_AbstractStructureElement__structureRelationship() const;
     e4c::tag_t getTag_StructureModel__structureElement() const;
     e4c::tag_t getTag_StructureRelationship__to() const;
     e4c::tag_t getTag_StructureRelationship__from() const;

protected:
    StructurePackage();

     ::ecore::EClass_ptr m_AbstractStructureElement;
     ::ecore::EClass_ptr m_Subsystem;
     ::ecore::EClass_ptr m_Layer;
     ::ecore::EClass_ptr m_StructureModel;
     ::ecore::EClass_ptr m_Component;
     ::ecore::EClass_ptr m_SoftwareSystem;
     ::ecore::EClass_ptr m_AbstractStructureRelationship;
     ::ecore::EClass_ptr m_StructureRelationship;
     ::ecore::EClass_ptr m_ArchitectureView;
     ::ecore::EClass_ptr m_StructureElement;
     ::ecore::EReference_ptr m_AbstractStructureElement__aggregated;
     ::ecore::EReference_ptr m_AbstractStructureElement__implementation;
     ::ecore::EReference_ptr m_AbstractStructureElement__structureElement;
     ::ecore::EReference_ptr m_AbstractStructureElement__structureRelationship;
     ::ecore::EReference_ptr m_StructureModel__structureElement;
     ::ecore::EReference_ptr m_StructureRelationship__to;
     ::ecore::EReference_ptr m_StructureRelationship__from;
};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_PACKAGE_HPP
