#ifndef EMF_CPP_KDM_STRUCTURE_FACTORY_HPP
#define EMF_CPP_KDM_STRUCTURE_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/structure/fwd.hpp>

namespace kdm
{
namespace structure
{


class StructureFactory : public ::ecore::EFactory
{
public:

    static const StructureFactory_ptr _instance();

    Subsystem_ptr createSubsystem() const;
    Layer_ptr createLayer() const;
    StructureModel_ptr createStructureModel() const;
    Component_ptr createComponent() const;
    SoftwareSystem_ptr createSoftwareSystem() const;
    StructureRelationship_ptr createStructureRelationship() const;
    ArchitectureView_ptr createArchitectureView() const;
    StructureElement_ptr createStructureElement() const;

protected:

    StructureFactory();
};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_FACTORY_HPP
