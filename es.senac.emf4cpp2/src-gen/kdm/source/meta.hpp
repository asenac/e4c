
#ifndef EMF_CPP_KDM_SOURCE_META_HPP
#define EMF_CPP_KDM_SOURCE_META_HPP

#include <kdm/source/fwd.hpp>

#include <kdm/core/fwd.hpp>
#include <kdm/kdm/fwd.hpp>

namespace kdm
{
namespace source
{



struct SourceRef__region_tag
{
	typedef SourceRef eClass;
	typedef ::kdm::source::SourceRegion eReferenceType;
	typedef SourceRef__region_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct SourceRef__language_tag
{
	typedef SourceRef eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct SourceRef__snippet_tag
{
	typedef SourceRef eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct SourceRegion__file_tag
{
	typedef SourceRegion eClass;
	typedef ::kdm::source::SourceFile eReferenceType;
	typedef SourceRegion__file_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct SourceRegion__startLine_tag
{
	typedef SourceRegion eClass;
	typedef ::kdm::core::Integer eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct SourceRegion__startPosition_tag
{
	typedef SourceRegion eClass;
	typedef ::kdm::core::Integer eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct SourceRegion__endLine_tag
{
	typedef SourceRegion eClass;
	typedef ::kdm::core::Integer eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct SourceRegion__endPosition_tag
{
	typedef SourceRegion eClass;
	typedef ::kdm::core::Integer eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct SourceRegion__language_tag
{
	typedef SourceRegion eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct SourceRegion__path_tag
{
	typedef SourceRegion eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct InventoryModel__inventoryElement_tag
{
	typedef InventoryModel eClass;
	typedef ::kdm::source::AbstractInventoryElement eReferenceType;
	typedef InventoryModel__inventoryElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct AbstractInventoryElement__inventoryRelation_tag
{
	typedef AbstractInventoryElement eClass;
	typedef ::kdm::source::AbstractInventoryRelationship eReferenceType;
	typedef AbstractInventoryElement__inventoryRelation_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct InventoryItem__version_tag
{
	typedef InventoryItem eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct InventoryItem__path_tag
{
	typedef InventoryItem eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct SourceFile__language_tag
{
	typedef SourceFile eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct SourceFile__encoding_tag
{
	typedef SourceFile eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct InventoryContainer__inventoryElement_tag
{
	typedef InventoryContainer eClass;
	typedef ::kdm::source::AbstractInventoryElement eReferenceType;
	typedef InventoryContainer__inventoryElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Directory__path_tag
{
	typedef Directory eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct DependsOn__to_tag
{
	typedef DependsOn eClass;
	typedef ::kdm::source::AbstractInventoryElement eReferenceType;
	typedef DependsOn__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct DependsOn__from_tag
{
	typedef DependsOn eClass;
	typedef ::kdm::source::AbstractInventoryElement eReferenceType;
	typedef DependsOn__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct InventoryRelationship__to_tag
{
	typedef InventoryRelationship eClass;
	typedef ::kdm::core::KDMEntity eReferenceType;
	typedef InventoryRelationship__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct InventoryRelationship__from_tag
{
	typedef InventoryRelationship eClass;
	typedef ::kdm::source::AbstractInventoryElement eReferenceType;
	typedef InventoryRelationship__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};


} // source
} // kdm


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::kdm::source::SourcePackage >
{
	typedef boost::mpl::list< ::kdm::source::SourceRef,
	                          ::kdm::source::SourceRegion,
	                          ::kdm::source::InventoryModel,
	                          ::kdm::source::AbstractInventoryElement,
	                          ::kdm::source::InventoryItem,
	                          ::kdm::source::SourceFile,
	                          ::kdm::source::Image,
	                          ::kdm::source::ResourceDescription,
	                          ::kdm::source::Configuration,
	                          ::kdm::source::InventoryContainer,
	                          ::kdm::source::Directory,
	                          ::kdm::source::Project,
	                          ::kdm::source::AbstractInventoryRelationship,
	                          ::kdm::source::BinaryFile,
	                          ::kdm::source::ExecutableFile,
	                          ::kdm::source::DependsOn,
	                          ::kdm::source::InventoryElement,
	                          ::kdm::source::InventoryRelationship > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::kdm::source::SourceRef >
{
	typedef boost::mpl::list< ::kdm::core::Element > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::source::SourceRef__region_tag,
	                          ::kdm::source::SourceRef__language_tag,
	                          ::kdm::source::SourceRef__snippet_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::source::SourceRef__region_tag,
	                          ::kdm::source::SourceRef__language_tag,
	                          ::kdm::source::SourceRef__snippet_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::source::SourceRef >
{
	static const char * get()
	{
		return "SourceRef";
	}
};


template < >
struct name< ::kdm::source::SourceRef__region_tag >
{
	static const char * get()
	{
		return "region";
	}
};


template < >
struct name< ::kdm::source::SourceRef__language_tag >
{
	static const char * get()
	{
		return "language";
	}
};


template < >
struct name< ::kdm::source::SourceRef__snippet_tag >
{
	static const char * get()
	{
		return "snippet";
	}
};


template < >
struct eclass< ::kdm::source::SourceRegion >
{
	typedef boost::mpl::list< ::kdm::core::Element > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::source::SourceRegion__file_tag,
	                          ::kdm::source::SourceRegion__startLine_tag,
	                          ::kdm::source::SourceRegion__startPosition_tag,
	                          ::kdm::source::SourceRegion__endLine_tag,
	                          ::kdm::source::SourceRegion__endPosition_tag,
	                          ::kdm::source::SourceRegion__language_tag,
	                          ::kdm::source::SourceRegion__path_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::source::SourceRegion__file_tag,
	                          ::kdm::source::SourceRegion__startLine_tag,
	                          ::kdm::source::SourceRegion__startPosition_tag,
	                          ::kdm::source::SourceRegion__endLine_tag,
	                          ::kdm::source::SourceRegion__endPosition_tag,
	                          ::kdm::source::SourceRegion__language_tag,
	                          ::kdm::source::SourceRegion__path_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::source::SourceRegion >
{
	static const char * get()
	{
		return "SourceRegion";
	}
};


template < >
struct name< ::kdm::source::SourceRegion__file_tag >
{
	static const char * get()
	{
		return "file";
	}
};


template < >
struct name< ::kdm::source::SourceRegion__startLine_tag >
{
	static const char * get()
	{
		return "startLine";
	}
};


template < >
struct name< ::kdm::source::SourceRegion__startPosition_tag >
{
	static const char * get()
	{
		return "startPosition";
	}
};


template < >
struct name< ::kdm::source::SourceRegion__endLine_tag >
{
	static const char * get()
	{
		return "endLine";
	}
};


template < >
struct name< ::kdm::source::SourceRegion__endPosition_tag >
{
	static const char * get()
	{
		return "endPosition";
	}
};


template < >
struct name< ::kdm::source::SourceRegion__language_tag >
{
	static const char * get()
	{
		return "language";
	}
};


template < >
struct name< ::kdm::source::SourceRegion__path_tag >
{
	static const char * get()
	{
		return "path";
	}
};


template < >
struct eclass< ::kdm::source::InventoryModel >
{
	typedef boost::mpl::list< ::kdm::kdm::KDMModel > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::kdm::KDMFramework,
	                          ::kdm::kdm::KDMModel > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::source::InventoryModel__inventoryElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::kdm::KDMFramework__audit_tag,
	                          ::kdm::kdm::KDMFramework__extensionFamily_tag,
	                          ::kdm::kdm::KDMFramework__name_tag,
	                          ::kdm::source::InventoryModel__inventoryElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::source::InventoryModel >
{
	static const char * get()
	{
		return "InventoryModel";
	}
};


template < >
struct name< ::kdm::source::InventoryModel__inventoryElement_tag >
{
	static const char * get()
	{
		return "inventoryElement";
	}
};


template < >
struct eclass< ::kdm::source::AbstractInventoryElement >
{
	typedef boost::mpl::list< ::kdm::core::KDMEntity > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::source::AbstractInventoryElement__inventoryRelation_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::source::AbstractInventoryElement__inventoryRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::source::AbstractInventoryElement >
{
	static const char * get()
	{
		return "AbstractInventoryElement";
	}
};


template < >
struct name< ::kdm::source::AbstractInventoryElement__inventoryRelation_tag >
{
	static const char * get()
	{
		return "inventoryRelation";
	}
};


template < >
struct eclass< ::kdm::source::InventoryItem >
{
	typedef boost::mpl::list< ::kdm::source::AbstractInventoryElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::source::AbstractInventoryElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::source::InventoryItem__version_tag,
	                          ::kdm::source::InventoryItem__path_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::source::AbstractInventoryElement__inventoryRelation_tag,
	                          ::kdm::source::InventoryItem__version_tag,
	                          ::kdm::source::InventoryItem__path_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::source::InventoryItem >
{
	static const char * get()
	{
		return "InventoryItem";
	}
};


template < >
struct name< ::kdm::source::InventoryItem__version_tag >
{
	static const char * get()
	{
		return "version";
	}
};


template < >
struct name< ::kdm::source::InventoryItem__path_tag >
{
	static const char * get()
	{
		return "path";
	}
};


template < >
struct eclass< ::kdm::source::SourceFile >
{
	typedef boost::mpl::list< ::kdm::source::InventoryItem > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::source::AbstractInventoryElement,
	                          ::kdm::source::InventoryItem > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::source::SourceFile__language_tag,
	                          ::kdm::source::SourceFile__encoding_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::source::AbstractInventoryElement__inventoryRelation_tag,
	                          ::kdm::source::InventoryItem__version_tag,
	                          ::kdm::source::InventoryItem__path_tag,
	                          ::kdm::source::SourceFile__language_tag,
	                          ::kdm::source::SourceFile__encoding_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::source::SourceFile >
{
	static const char * get()
	{
		return "SourceFile";
	}
};


template < >
struct name< ::kdm::source::SourceFile__language_tag >
{
	static const char * get()
	{
		return "language";
	}
};


template < >
struct name< ::kdm::source::SourceFile__encoding_tag >
{
	static const char * get()
	{
		return "encoding";
	}
};


template < >
struct eclass< ::kdm::source::Image >
{
	typedef boost::mpl::list< ::kdm::source::InventoryItem > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::source::AbstractInventoryElement,
	                          ::kdm::source::InventoryItem > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::source::AbstractInventoryElement__inventoryRelation_tag,
	                          ::kdm::source::InventoryItem__version_tag,
	                          ::kdm::source::InventoryItem__path_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::source::Image >
{
	static const char * get()
	{
		return "Image";
	}
};


template < >
struct eclass< ::kdm::source::ResourceDescription >
{
	typedef boost::mpl::list< ::kdm::source::InventoryItem > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::source::AbstractInventoryElement,
	                          ::kdm::source::InventoryItem > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::source::AbstractInventoryElement__inventoryRelation_tag,
	                          ::kdm::source::InventoryItem__version_tag,
	                          ::kdm::source::InventoryItem__path_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::source::ResourceDescription >
{
	static const char * get()
	{
		return "ResourceDescription";
	}
};


template < >
struct eclass< ::kdm::source::Configuration >
{
	typedef boost::mpl::list< ::kdm::source::InventoryItem > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::source::AbstractInventoryElement,
	                          ::kdm::source::InventoryItem > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::source::AbstractInventoryElement__inventoryRelation_tag,
	                          ::kdm::source::InventoryItem__version_tag,
	                          ::kdm::source::InventoryItem__path_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::source::Configuration >
{
	static const char * get()
	{
		return "Configuration";
	}
};


template < >
struct eclass< ::kdm::source::InventoryContainer >
{
	typedef boost::mpl::list< ::kdm::source::AbstractInventoryElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::source::AbstractInventoryElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::source::InventoryContainer__inventoryElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::source::AbstractInventoryElement__inventoryRelation_tag,
	                          ::kdm::source::InventoryContainer__inventoryElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::source::InventoryContainer >
{
	static const char * get()
	{
		return "InventoryContainer";
	}
};


template < >
struct name< ::kdm::source::InventoryContainer__inventoryElement_tag >
{
	static const char * get()
	{
		return "inventoryElement";
	}
};


template < >
struct eclass< ::kdm::source::Directory >
{
	typedef boost::mpl::list< ::kdm::source::InventoryContainer > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::source::AbstractInventoryElement,
	                          ::kdm::source::InventoryContainer > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::source::Directory__path_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::source::AbstractInventoryElement__inventoryRelation_tag,
	                          ::kdm::source::InventoryContainer__inventoryElement_tag,
	                          ::kdm::source::Directory__path_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::source::Directory >
{
	static const char * get()
	{
		return "Directory";
	}
};


template < >
struct name< ::kdm::source::Directory__path_tag >
{
	static const char * get()
	{
		return "path";
	}
};


template < >
struct eclass< ::kdm::source::Project >
{
	typedef boost::mpl::list< ::kdm::source::InventoryContainer > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::source::AbstractInventoryElement,
	                          ::kdm::source::InventoryContainer > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::source::AbstractInventoryElement__inventoryRelation_tag,
	                          ::kdm::source::InventoryContainer__inventoryElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::source::Project >
{
	static const char * get()
	{
		return "Project";
	}
};


template < >
struct eclass< ::kdm::source::AbstractInventoryRelationship >
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
struct name< ::kdm::source::AbstractInventoryRelationship >
{
	static const char * get()
	{
		return "AbstractInventoryRelationship";
	}
};


template < >
struct eclass< ::kdm::source::BinaryFile >
{
	typedef boost::mpl::list< ::kdm::source::InventoryItem > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::source::AbstractInventoryElement,
	                          ::kdm::source::InventoryItem > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::source::AbstractInventoryElement__inventoryRelation_tag,
	                          ::kdm::source::InventoryItem__version_tag,
	                          ::kdm::source::InventoryItem__path_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::source::BinaryFile >
{
	static const char * get()
	{
		return "BinaryFile";
	}
};


template < >
struct eclass< ::kdm::source::ExecutableFile >
{
	typedef boost::mpl::list< ::kdm::source::InventoryItem > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::source::AbstractInventoryElement,
	                          ::kdm::source::InventoryItem > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::source::AbstractInventoryElement__inventoryRelation_tag,
	                          ::kdm::source::InventoryItem__version_tag,
	                          ::kdm::source::InventoryItem__path_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::source::ExecutableFile >
{
	static const char * get()
	{
		return "ExecutableFile";
	}
};


template < >
struct eclass< ::kdm::source::DependsOn >
{
	typedef boost::mpl::list< ::kdm::source::AbstractInventoryRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::source::AbstractInventoryRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::source::DependsOn__to_tag,
	                          ::kdm::source::DependsOn__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::source::DependsOn__to_tag,
	                          ::kdm::source::DependsOn__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::source::DependsOn >
{
	static const char * get()
	{
		return "DependsOn";
	}
};


template < >
struct name< ::kdm::source::DependsOn__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::source::DependsOn__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::source::InventoryElement >
{
	typedef boost::mpl::list< ::kdm::source::AbstractInventoryElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::source::AbstractInventoryElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::source::AbstractInventoryElement__inventoryRelation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::source::InventoryElement >
{
	static const char * get()
	{
		return "InventoryElement";
	}
};


template < >
struct eclass< ::kdm::source::InventoryRelationship >
{
	typedef boost::mpl::list< ::kdm::source::AbstractInventoryRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::source::AbstractInventoryRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::source::InventoryRelationship__to_tag,
	                          ::kdm::source::InventoryRelationship__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::source::InventoryRelationship__to_tag,
	                          ::kdm::source::InventoryRelationship__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::source::InventoryRelationship >
{
	static const char * get()
	{
		return "InventoryRelationship";
	}
};


template < >
struct name< ::kdm::source::InventoryRelationship__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::source::InventoryRelationship__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_KDM_SOURCE_Meta_HPP
