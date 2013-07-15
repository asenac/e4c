
#ifndef EMF_CPP_KDM_BUILD_META_HPP
#define EMF_CPP_KDM_BUILD_META_HPP

#include <kdm/build/fwd.hpp>

#include <kdm/core/fwd.hpp>
#include <kdm/kdm/fwd.hpp>
#include <kdm/source/fwd.hpp>

namespace kdm
{
namespace build
{



struct AbstractBuildElement__buildRelation_tag
{
	typedef AbstractBuildElement eClass;
	typedef ::kdm::build::AbstractBuildRelationship eReferenceType;
	typedef AbstractBuildElement__buildRelation_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct BuildResource__implementation_tag
{
	typedef BuildResource eClass;
	typedef ::kdm::core::KDMEntity eReferenceType;
	typedef BuildResource__implementation_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct BuildResource__groupedBuild_tag
{
	typedef BuildResource eClass;
	typedef ::kdm::build::AbstractBuildElement eReferenceType;
	typedef BuildResource__groupedBuild_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct BuildResource__buildElement_tag
{
	typedef BuildResource eClass;
	typedef ::kdm::build::AbstractBuildElement eReferenceType;
	typedef BuildResource__buildElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct BuildDescription__source_tag
{
	typedef BuildDescription eClass;
	typedef ::kdm::source::SourceRef eReferenceType;
	typedef BuildDescription__source_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct BuildDescription__text_tag
{
	typedef BuildDescription eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct LinksTo__to_tag
{
	typedef LinksTo eClass;
	typedef ::kdm::build::AbstractBuildElement eReferenceType;
	typedef LinksTo__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct LinksTo__from_tag
{
	typedef LinksTo eClass;
	typedef ::kdm::build::SymbolicLink eReferenceType;
	typedef LinksTo__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Consumes__to_tag
{
	typedef Consumes eClass;
	typedef ::kdm::build::AbstractBuildElement eReferenceType;
	typedef Consumes__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Consumes__from_tag
{
	typedef Consumes eClass;
	typedef ::kdm::build::BuildStep eReferenceType;
	typedef Consumes__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct BuildModel__buildElement_tag
{
	typedef BuildModel eClass;
	typedef ::kdm::build::AbstractBuildElement eReferenceType;
	typedef BuildModel__buildElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct BuildRelationship__to_tag
{
	typedef BuildRelationship eClass;
	typedef ::kdm::core::KDMEntity eReferenceType;
	typedef BuildRelationship__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct BuildRelationship__from_tag
{
	typedef BuildRelationship eClass;
	typedef ::kdm::build::AbstractBuildElement eReferenceType;
	typedef BuildRelationship__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct SuppliedBy__to_tag
{
	typedef SuppliedBy eClass;
	typedef ::kdm::build::Supplier eReferenceType;
	typedef SuppliedBy__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct SuppliedBy__from_tag
{
	typedef SuppliedBy eClass;
	typedef ::kdm::build::AbstractBuildElement eReferenceType;
	typedef SuppliedBy__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Produces__to_tag
{
	typedef Produces eClass;
	typedef ::kdm::build::AbstractBuildElement eReferenceType;
	typedef Produces__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Produces__from_tag
{
	typedef Produces eClass;
	typedef ::kdm::build::BuildStep eReferenceType;
	typedef Produces__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct SupportedBy__to_tag
{
	typedef SupportedBy eClass;
	typedef ::kdm::build::Tool eReferenceType;
	typedef SupportedBy__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct SupportedBy__from_tag
{
	typedef SupportedBy eClass;
	typedef ::kdm::build::BuildStep eReferenceType;
	typedef SupportedBy__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct DescribedBy__to_tag
{
	typedef DescribedBy eClass;
	typedef ::kdm::build::BuildDescription eReferenceType;
	typedef DescribedBy__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct DescribedBy__from_tag
{
	typedef DescribedBy eClass;
	typedef ::kdm::build::BuildStep eReferenceType;
	typedef DescribedBy__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};


} // build
} // kdm


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::kdm::build::BuildPackage >
{
	typedef boost::mpl::list< ::kdm::build::AbstractBuildElement,
	                          ::kdm::build::BuildResource,
	                          ::kdm::build::BuildDescription,
	                          ::kdm::build::SymbolicLink,
	                          ::kdm::build::AbstractBuildRelationship,
	                          ::kdm::build::LinksTo,
	                          ::kdm::build::Consumes,
	                          ::kdm::build::BuildModel,
	                          ::kdm::build::BuildComponent,
	                          ::kdm::build::Supplier,
	                          ::kdm::build::Tool,
	                          ::kdm::build::BuildElement,
	                          ::kdm::build::BuildRelationship,
	                          ::kdm::build::SuppliedBy,
	                          ::kdm::build::Library,
	                          ::kdm::build::BuildStep,
	                          ::kdm::build::Produces,
	                          ::kdm::build::SupportedBy,
	                          ::kdm::build::BuildProduct,
	                          ::kdm::build::DescribedBy > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::kdm::build::AbstractBuildElement >
{
	typedef boost::mpl::list< ::kdm::core::KDMEntity > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::build::AbstractBuildElement__buildRelation_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::build::AbstractBuildElement__buildRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::AbstractBuildElement >
{
	static const char * get()
	{
		return "AbstractBuildElement";
	}
};


template < >
struct name< ::kdm::build::AbstractBuildElement__buildRelation_tag >
{
	static const char * get()
	{
		return "buildRelation";
	}
};


template < >
struct eclass< ::kdm::build::BuildResource >
{
	typedef boost::mpl::list< ::kdm::build::AbstractBuildElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::build::AbstractBuildElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::build::BuildResource__implementation_tag,
	                          ::kdm::build::BuildResource__groupedBuild_tag,
	                          ::kdm::build::BuildResource__buildElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::build::AbstractBuildElement__buildRelation_tag,
	                          ::kdm::build::BuildResource__implementation_tag,
	                          ::kdm::build::BuildResource__groupedBuild_tag,
	                          ::kdm::build::BuildResource__buildElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::BuildResource >
{
	static const char * get()
	{
		return "BuildResource";
	}
};


template < >
struct name< ::kdm::build::BuildResource__implementation_tag >
{
	static const char * get()
	{
		return "implementation";
	}
};


template < >
struct name< ::kdm::build::BuildResource__groupedBuild_tag >
{
	static const char * get()
	{
		return "groupedBuild";
	}
};


template < >
struct name< ::kdm::build::BuildResource__buildElement_tag >
{
	static const char * get()
	{
		return "buildElement";
	}
};


template < >
struct eclass< ::kdm::build::BuildDescription >
{
	typedef boost::mpl::list< ::kdm::build::BuildResource > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::build::AbstractBuildElement,
	                          ::kdm::build::BuildResource > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::build::BuildDescription__source_tag,
	                          ::kdm::build::BuildDescription__text_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::build::AbstractBuildElement__buildRelation_tag,
	                          ::kdm::build::BuildResource__implementation_tag,
	                          ::kdm::build::BuildResource__groupedBuild_tag,
	                          ::kdm::build::BuildResource__buildElement_tag,
	                          ::kdm::build::BuildDescription__source_tag,
	                          ::kdm::build::BuildDescription__text_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::BuildDescription >
{
	static const char * get()
	{
		return "BuildDescription";
	}
};


template < >
struct name< ::kdm::build::BuildDescription__source_tag >
{
	static const char * get()
	{
		return "source";
	}
};


template < >
struct name< ::kdm::build::BuildDescription__text_tag >
{
	static const char * get()
	{
		return "text";
	}
};


template < >
struct eclass< ::kdm::build::SymbolicLink >
{
	typedef boost::mpl::list< ::kdm::build::AbstractBuildElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::build::AbstractBuildElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::build::AbstractBuildElement__buildRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::SymbolicLink >
{
	static const char * get()
	{
		return "SymbolicLink";
	}
};


template < >
struct eclass< ::kdm::build::AbstractBuildRelationship >
{
	typedef boost::mpl::list< ::kdm::core::KDMRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::AbstractBuildRelationship >
{
	static const char * get()
	{
		return "AbstractBuildRelationship";
	}
};


template < >
struct eclass< ::kdm::build::LinksTo >
{
	typedef boost::mpl::list< ::kdm::build::AbstractBuildRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::build::AbstractBuildRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::build::LinksTo__to_tag,
	                          ::kdm::build::LinksTo__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::build::LinksTo__to_tag,
	                          ::kdm::build::LinksTo__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::LinksTo >
{
	static const char * get()
	{
		return "LinksTo";
	}
};


template < >
struct name< ::kdm::build::LinksTo__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::build::LinksTo__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::build::Consumes >
{
	typedef boost::mpl::list< ::kdm::build::AbstractBuildRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::build::AbstractBuildRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::build::Consumes__to_tag,
	                          ::kdm::build::Consumes__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::build::Consumes__to_tag,
	                          ::kdm::build::Consumes__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::Consumes >
{
	static const char * get()
	{
		return "Consumes";
	}
};


template < >
struct name< ::kdm::build::Consumes__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::build::Consumes__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::build::BuildModel >
{
	typedef boost::mpl::list< ::kdm::kdm::KDMModel > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::kdm::KDMFramework,
	                          ::kdm::kdm::KDMModel > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::build::BuildModel__buildElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::kdm::KDMFramework__audit_tag,
	                          ::kdm::kdm::KDMFramework__extensionFamily_tag,
	                          ::kdm::kdm::KDMFramework__name_tag,
	                          ::kdm::build::BuildModel__buildElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::BuildModel >
{
	static const char * get()
	{
		return "BuildModel";
	}
};


template < >
struct name< ::kdm::build::BuildModel__buildElement_tag >
{
	static const char * get()
	{
		return "buildElement";
	}
};


template < >
struct eclass< ::kdm::build::BuildComponent >
{
	typedef boost::mpl::list< ::kdm::build::BuildResource > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::build::AbstractBuildElement,
	                          ::kdm::build::BuildResource > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::build::AbstractBuildElement__buildRelation_tag,
	                          ::kdm::build::BuildResource__implementation_tag,
	                          ::kdm::build::BuildResource__groupedBuild_tag,
	                          ::kdm::build::BuildResource__buildElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::BuildComponent >
{
	static const char * get()
	{
		return "BuildComponent";
	}
};


template < >
struct eclass< ::kdm::build::Supplier >
{
	typedef boost::mpl::list< ::kdm::build::AbstractBuildElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::build::AbstractBuildElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::build::AbstractBuildElement__buildRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::Supplier >
{
	static const char * get()
	{
		return "Supplier";
	}
};


template < >
struct eclass< ::kdm::build::Tool >
{
	typedef boost::mpl::list< ::kdm::build::AbstractBuildElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::build::AbstractBuildElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::build::AbstractBuildElement__buildRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::Tool >
{
	static const char * get()
	{
		return "Tool";
	}
};


template < >
struct eclass< ::kdm::build::BuildElement >
{
	typedef boost::mpl::list< ::kdm::build::AbstractBuildElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::build::AbstractBuildElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::build::AbstractBuildElement__buildRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::BuildElement >
{
	static const char * get()
	{
		return "BuildElement";
	}
};


template < >
struct eclass< ::kdm::build::BuildRelationship >
{
	typedef boost::mpl::list< ::kdm::build::AbstractBuildRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::build::AbstractBuildRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::build::BuildRelationship__to_tag,
	                          ::kdm::build::BuildRelationship__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::build::BuildRelationship__to_tag,
	                          ::kdm::build::BuildRelationship__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::BuildRelationship >
{
	static const char * get()
	{
		return "BuildRelationship";
	}
};


template < >
struct name< ::kdm::build::BuildRelationship__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::build::BuildRelationship__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::build::SuppliedBy >
{
	typedef boost::mpl::list< ::kdm::build::AbstractBuildRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::build::AbstractBuildRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::build::SuppliedBy__to_tag,
	                          ::kdm::build::SuppliedBy__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::build::SuppliedBy__to_tag,
	                          ::kdm::build::SuppliedBy__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::SuppliedBy >
{
	static const char * get()
	{
		return "SuppliedBy";
	}
};


template < >
struct name< ::kdm::build::SuppliedBy__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::build::SuppliedBy__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::build::Library >
{
	typedef boost::mpl::list< ::kdm::build::BuildResource > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::build::AbstractBuildElement,
	                          ::kdm::build::BuildResource > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::build::AbstractBuildElement__buildRelation_tag,
	                          ::kdm::build::BuildResource__implementation_tag,
	                          ::kdm::build::BuildResource__groupedBuild_tag,
	                          ::kdm::build::BuildResource__buildElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::Library >
{
	static const char * get()
	{
		return "Library";
	}
};


template < >
struct eclass< ::kdm::build::BuildStep >
{
	typedef boost::mpl::list< ::kdm::build::BuildResource > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::build::AbstractBuildElement,
	                          ::kdm::build::BuildResource > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::build::AbstractBuildElement__buildRelation_tag,
	                          ::kdm::build::BuildResource__implementation_tag,
	                          ::kdm::build::BuildResource__groupedBuild_tag,
	                          ::kdm::build::BuildResource__buildElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::BuildStep >
{
	static const char * get()
	{
		return "BuildStep";
	}
};


template < >
struct eclass< ::kdm::build::Produces >
{
	typedef boost::mpl::list< ::kdm::build::AbstractBuildRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::build::AbstractBuildRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::build::Produces__to_tag,
	                          ::kdm::build::Produces__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::build::Produces__to_tag,
	                          ::kdm::build::Produces__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::Produces >
{
	static const char * get()
	{
		return "Produces";
	}
};


template < >
struct name< ::kdm::build::Produces__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::build::Produces__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::build::SupportedBy >
{
	typedef boost::mpl::list< ::kdm::build::AbstractBuildRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::build::AbstractBuildRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::build::SupportedBy__to_tag,
	                          ::kdm::build::SupportedBy__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::build::SupportedBy__to_tag,
	                          ::kdm::build::SupportedBy__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::SupportedBy >
{
	static const char * get()
	{
		return "SupportedBy";
	}
};


template < >
struct name< ::kdm::build::SupportedBy__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::build::SupportedBy__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::build::BuildProduct >
{
	typedef boost::mpl::list< ::kdm::build::BuildResource > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::build::AbstractBuildElement,
	                          ::kdm::build::BuildResource > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::build::AbstractBuildElement__buildRelation_tag,
	                          ::kdm::build::BuildResource__implementation_tag,
	                          ::kdm::build::BuildResource__groupedBuild_tag,
	                          ::kdm::build::BuildResource__buildElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::BuildProduct >
{
	static const char * get()
	{
		return "BuildProduct";
	}
};


template < >
struct eclass< ::kdm::build::DescribedBy >
{
	typedef boost::mpl::list< ::kdm::build::AbstractBuildRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::build::AbstractBuildRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::build::DescribedBy__to_tag,
	                          ::kdm::build::DescribedBy__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::build::DescribedBy__to_tag,
	                          ::kdm::build::DescribedBy__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::build::DescribedBy >
{
	static const char * get()
	{
		return "DescribedBy";
	}
};


template < >
struct name< ::kdm::build::DescribedBy__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::build::DescribedBy__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_KDM_BUILD_Meta_HPP
