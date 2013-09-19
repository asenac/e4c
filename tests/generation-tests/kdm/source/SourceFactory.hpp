#ifndef EMF_CPP_KDM_SOURCE_FACTORY_HPP
#define EMF_CPP_KDM_SOURCE_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/source/fwd.hpp>

namespace kdm
{
namespace source
{


class SourceFactory : public ::ecore::EFactory
{
public:

    static const SourceFactory_ptr _instance();

    SourceRef_ptr createSourceRef() const;
    SourceRegion_ptr createSourceRegion() const;
    InventoryModel_ptr createInventoryModel() const;
    InventoryItem_ptr createInventoryItem() const;
    SourceFile_ptr createSourceFile() const;
    Image_ptr createImage() const;
    ResourceDescription_ptr createResourceDescription() const;
    Configuration_ptr createConfiguration() const;
    InventoryContainer_ptr createInventoryContainer() const;
    Directory_ptr createDirectory() const;
    Project_ptr createProject() const;
    BinaryFile_ptr createBinaryFile() const;
    ExecutableFile_ptr createExecutableFile() const;
    DependsOn_ptr createDependsOn() const;
    InventoryElement_ptr createInventoryElement() const;
    InventoryRelationship_ptr createInventoryRelationship() const;

protected:

    SourceFactory();
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_FACTORY_HPP
