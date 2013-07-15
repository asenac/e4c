
#ifndef EMF_CPP_KDM_BUILD_FWD_HPP
#define EMF_CPP_KDM_BUILD_FWD_HPP

#include <emf4cpp2/emf4cpp2.hpp>


namespace kdm
{
namespace build
{


class BuildPackage;
typedef BuildPackage * BuildPackage_ptr;
class BuildFactory;
typedef BuildFactory * BuildFactory_ptr;

// Data types


// Classes
class AbstractBuildElement;
typedef AbstractBuildElement* AbstractBuildElement_ptr;
class BuildResource;
typedef BuildResource* BuildResource_ptr;
class BuildDescription;
typedef BuildDescription* BuildDescription_ptr;
class SymbolicLink;
typedef SymbolicLink* SymbolicLink_ptr;
class AbstractBuildRelationship;
typedef AbstractBuildRelationship* AbstractBuildRelationship_ptr;
class LinksTo;
typedef LinksTo* LinksTo_ptr;
class Consumes;
typedef Consumes* Consumes_ptr;
class BuildModel;
typedef BuildModel* BuildModel_ptr;
class BuildComponent;
typedef BuildComponent* BuildComponent_ptr;
class Supplier;
typedef Supplier* Supplier_ptr;
class Tool;
typedef Tool* Tool_ptr;
class BuildElement;
typedef BuildElement* BuildElement_ptr;
class BuildRelationship;
typedef BuildRelationship* BuildRelationship_ptr;
class SuppliedBy;
typedef SuppliedBy* SuppliedBy_ptr;
class Library;
typedef Library* Library_ptr;
class BuildStep;
typedef BuildStep* BuildStep_ptr;
class Produces;
typedef Produces* Produces_ptr;
class SupportedBy;
typedef SupportedBy* SupportedBy_ptr;
class BuildProduct;
typedef BuildProduct* BuildProduct_ptr;
class DescribedBy;
typedef DescribedBy* DescribedBy_ptr;


// Structural features
struct AbstractBuildElement__buildRelation_tag;
struct BuildResource__implementation_tag;
struct BuildResource__groupedBuild_tag;
struct BuildResource__buildElement_tag;
struct BuildDescription__source_tag;
struct BuildDescription__text_tag;
struct LinksTo__to_tag;
struct LinksTo__from_tag;
struct Consumes__to_tag;
struct Consumes__from_tag;
struct BuildModel__buildElement_tag;
struct BuildRelationship__to_tag;
struct BuildRelationship__from_tag;
struct SuppliedBy__to_tag;
struct SuppliedBy__from_tag;
struct Produces__to_tag;
struct Produces__from_tag;
struct SupportedBy__to_tag;
struct SupportedBy__from_tag;
struct DescribedBy__to_tag;
struct DescribedBy__from_tag;


} // build
} // kdm


#endif // EMF_CPP_KDM_BUILD_FWD_HPP
