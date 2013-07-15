#ifndef EMF_CPP_KDM_BUILD_PACKAGE_HPP
#define EMF_CPP_KDM_BUILD_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/build/fwd.hpp>

namespace kdm
{
namespace build
{


class BuildPackage : public ::ecore::EPackage
{
public:
    static BuildPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_AbstractBuildElement();
 	e4c::tag_t getTag_BuildResource();
 	e4c::tag_t getTag_BuildDescription();
 	e4c::tag_t getTag_SymbolicLink();
 	e4c::tag_t getTag_AbstractBuildRelationship();
 	e4c::tag_t getTag_LinksTo();
 	e4c::tag_t getTag_Consumes();
 	e4c::tag_t getTag_BuildModel();
 	e4c::tag_t getTag_BuildComponent();
 	e4c::tag_t getTag_Supplier();
 	e4c::tag_t getTag_Tool();
 	e4c::tag_t getTag_BuildElement();
 	e4c::tag_t getTag_BuildRelationship();
 	e4c::tag_t getTag_SuppliedBy();
 	e4c::tag_t getTag_Library();
 	e4c::tag_t getTag_BuildStep();
 	e4c::tag_t getTag_Produces();
 	e4c::tag_t getTag_SupportedBy();
 	e4c::tag_t getTag_BuildProduct();
 	e4c::tag_t getTag_DescribedBy();
 
 	// Structural features
 	e4c::tag_t getTag_AbstractBuildElement__buildRelation();
 	e4c::tag_t getTag_BuildResource__implementation();
 	e4c::tag_t getTag_BuildResource__groupedBuild();
 	e4c::tag_t getTag_BuildResource__buildElement();
 	e4c::tag_t getTag_BuildDescription__source();
 	e4c::tag_t getTag_BuildDescription__text();
 	e4c::tag_t getTag_LinksTo__to();
 	e4c::tag_t getTag_LinksTo__from();
 	e4c::tag_t getTag_Consumes__to();
 	e4c::tag_t getTag_Consumes__from();
 	e4c::tag_t getTag_BuildModel__buildElement();
 	e4c::tag_t getTag_BuildRelationship__to();
 	e4c::tag_t getTag_BuildRelationship__from();
 	e4c::tag_t getTag_SuppliedBy__to();
 	e4c::tag_t getTag_SuppliedBy__from();
 	e4c::tag_t getTag_Produces__to();
 	e4c::tag_t getTag_Produces__from();
 	e4c::tag_t getTag_SupportedBy__to();
 	e4c::tag_t getTag_SupportedBy__from();
 	e4c::tag_t getTag_DescribedBy__to();
 	e4c::tag_t getTag_DescribedBy__from();

protected:
    BuildPackage();
};

} // build
} // kdm


#endif // EMF_CPP_KDM_BUILD_PACKAGE_HPP
