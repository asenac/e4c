
#ifndef EMF_CPP_KDM_DATA_META_HPP
#define EMF_CPP_KDM_DATA_META_HPP

#include <kdm/data/fwd.hpp>

#include <kdm/core/fwd.hpp>
#include <kdm/kdm/fwd.hpp>
#include <kdm/source/fwd.hpp>
#include <kdm/action/fwd.hpp>
#include <kdm/code/fwd.hpp>

namespace kdm
{
namespace data
{



struct DataModel__dataElement_tag
{
	typedef DataModel eClass;
	typedef ::kdm::data::AbstractDataElement eReferenceType;
	typedef DataModel__dataElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct AbstractDataElement__source_tag
{
	typedef AbstractDataElement eClass;
	typedef ::kdm::source::SourceRef eReferenceType;
	typedef AbstractDataElement__source_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct AbstractDataElement__dataRelation_tag
{
	typedef AbstractDataElement eClass;
	typedef ::kdm::data::AbstractDataRelationship eReferenceType;
	typedef AbstractDataElement__dataRelation_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct AbstractDataElement__abstraction_tag
{
	typedef AbstractDataElement eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef AbstractDataElement__abstraction_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct IndexElement__implementation_tag
{
	typedef IndexElement eClass;
	typedef ::kdm::code::ItemUnit eReferenceType;
	typedef IndexElement__implementation_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct KeyRelation__to_tag
{
	typedef KeyRelation eClass;
	typedef ::kdm::data::UniqueKey eReferenceType;
	typedef KeyRelation__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct KeyRelation__from_tag
{
	typedef KeyRelation eClass;
	typedef ::kdm::data::ReferenceKey eReferenceType;
	typedef KeyRelation__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct DataContainer__dataElement_tag
{
	typedef DataContainer eClass;
	typedef ::kdm::data::DataResource eReferenceType;
	typedef DataContainer__dataElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct RelationalSchema__codeElement_tag
{
	typedef RelationalSchema eClass;
	typedef ::kdm::code::CodeItem eReferenceType;
	typedef RelationalSchema__codeElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ColumnSet__itemUnit_tag
{
	typedef ColumnSet eClass;
	typedef ::kdm::code::ItemUnit eReferenceType;
	typedef ColumnSet__itemUnit_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct DataEvent__kind_tag
{
	typedef DataEvent eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct XMLSchema__contentElement_tag
{
	typedef XMLSchema eClass;
	typedef ::kdm::data::AbstractContentElement eReferenceType;
	typedef XMLSchema__contentElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ComplexContentType__contentElement_tag
{
	typedef ComplexContentType eClass;
	typedef ::kdm::data::AbstractContentElement eReferenceType;
	typedef ComplexContentType__contentElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ContentItem__type_tag
{
	typedef ContentItem eClass;
	typedef ::kdm::data::ComplexContentType eReferenceType;
	typedef ContentItem__type_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ContentItem__contentElement_tag
{
	typedef ContentItem eClass;
	typedef ::kdm::data::AbstractContentElement eReferenceType;
	typedef ContentItem__contentElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ContentRestriction__kind_tag
{
	typedef ContentRestriction eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct ContentRestriction__value_tag
{
	typedef ContentRestriction eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct SimpleContentType__type_tag
{
	typedef SimpleContentType eClass;
	typedef ::kdm::data::ComplexContentType eReferenceType;
	typedef SimpleContentType__type_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct SimpleContentType__kind_tag
{
	typedef SimpleContentType eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct DataRelationship__to_tag
{
	typedef DataRelationship eClass;
	typedef ::kdm::core::KDMEntity eReferenceType;
	typedef DataRelationship__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct DataRelationship__from_tag
{
	typedef DataRelationship eClass;
	typedef ::kdm::data::AbstractDataElement eReferenceType;
	typedef DataRelationship__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct DataAction__kind_tag
{
	typedef DataAction eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct DataAction__implementation_tag
{
	typedef DataAction eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef DataAction__implementation_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct DataAction__dataElement_tag
{
	typedef DataAction eClass;
	typedef ::kdm::data::DataEvent eReferenceType;
	typedef DataAction__dataElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ReadsColumnSet__to_tag
{
	typedef ReadsColumnSet eClass;
	typedef ::kdm::data::ColumnSet eReferenceType;
	typedef ReadsColumnSet__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ReadsColumnSet__from_tag
{
	typedef ReadsColumnSet eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef ReadsColumnSet__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct TypedBy__to_tag
{
	typedef TypedBy eClass;
	typedef ::kdm::data::ComplexContentType eReferenceType;
	typedef TypedBy__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct TypedBy__from_tag
{
	typedef TypedBy eClass;
	typedef ::kdm::data::ContentItem eReferenceType;
	typedef TypedBy__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ReferenceTo__to_tag
{
	typedef ReferenceTo eClass;
	typedef ::kdm::data::ContentItem eReferenceType;
	typedef ReferenceTo__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ReferenceTo__from_tag
{
	typedef ReferenceTo eClass;
	typedef ::kdm::data::ContentItem eReferenceType;
	typedef ReferenceTo__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct RestrictionOf__to_tag
{
	typedef RestrictionOf eClass;
	typedef ::kdm::data::ComplexContentType eReferenceType;
	typedef RestrictionOf__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct RestrictionOf__from_tag
{
	typedef RestrictionOf eClass;
	typedef ::kdm::data::ComplexContentType eReferenceType;
	typedef RestrictionOf__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ExtensionTo__to_tag
{
	typedef ExtensionTo eClass;
	typedef ::kdm::data::ComplexContentType eReferenceType;
	typedef ExtensionTo__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ExtensionTo__from_tag
{
	typedef ExtensionTo eClass;
	typedef ::kdm::data::ComplexContentType eReferenceType;
	typedef ExtensionTo__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct DatatypeOf__to_tag
{
	typedef DatatypeOf eClass;
	typedef ::kdm::code::Datatype eReferenceType;
	typedef DatatypeOf__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct DatatypeOf__from_tag
{
	typedef DatatypeOf eClass;
	typedef ::kdm::data::ComplexContentType eReferenceType;
	typedef DatatypeOf__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct HasContent__to_tag
{
	typedef HasContent eClass;
	typedef ::kdm::data::AbstractDataElement eReferenceType;
	typedef HasContent__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct HasContent__from_tag
{
	typedef HasContent eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef HasContent__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct WritesColumnSet__to_tag
{
	typedef WritesColumnSet eClass;
	typedef ::kdm::data::ColumnSet eReferenceType;
	typedef WritesColumnSet__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct WritesColumnSet__from_tag
{
	typedef WritesColumnSet eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef WritesColumnSet__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ProducesDataEvent__to_tag
{
	typedef ProducesDataEvent eClass;
	typedef ::kdm::data::DataEvent eReferenceType;
	typedef ProducesDataEvent__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ProducesDataEvent__from_tag
{
	typedef ProducesDataEvent eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef ProducesDataEvent__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ManagesData__to_tag
{
	typedef ManagesData eClass;
	typedef ::kdm::data::AbstractDataElement eReferenceType;
	typedef ManagesData__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ManagesData__from_tag
{
	typedef ManagesData eClass;
	typedef ::kdm::action::ActionElement eReferenceType;
	typedef ManagesData__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};


} // data
} // kdm


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::kdm::data::DataPackage >
{
	typedef boost::mpl::list< ::kdm::data::DataModel,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::DataResource,
	                          ::kdm::data::IndexElement,
	                          ::kdm::data::UniqueKey,
	                          ::kdm::data::Index,
	                          ::kdm::data::AbstractDataRelationship,
	                          ::kdm::data::KeyRelation,
	                          ::kdm::data::ReferenceKey,
	                          ::kdm::data::DataContainer,
	                          ::kdm::data::Catalog,
	                          ::kdm::data::RelationalSchema,
	                          ::kdm::data::ColumnSet,
	                          ::kdm::data::RelationalTable,
	                          ::kdm::data::RelationalView,
	                          ::kdm::data::RecordFile,
	                          ::kdm::data::DataEvent,
	                          ::kdm::data::XMLSchema,
	                          ::kdm::data::AbstractContentElement,
	                          ::kdm::data::ComplexContentType,
	                          ::kdm::data::AllContent,
	                          ::kdm::data::SeqContent,
	                          ::kdm::data::ChoiceContent,
	                          ::kdm::data::ContentItem,
	                          ::kdm::data::GroupContent,
	                          ::kdm::data::ContentRestriction,
	                          ::kdm::data::SimpleContentType,
	                          ::kdm::data::ExtendedDataElement,
	                          ::kdm::data::DataRelationship,
	                          ::kdm::data::MixedContent,
	                          ::kdm::data::ContentReference,
	                          ::kdm::data::DataAction,
	                          ::kdm::data::ReadsColumnSet,
	                          ::kdm::data::ContentAttribute,
	                          ::kdm::data::TypedBy,
	                          ::kdm::data::ReferenceTo,
	                          ::kdm::data::RestrictionOf,
	                          ::kdm::data::ExtensionTo,
	                          ::kdm::data::DatatypeOf,
	                          ::kdm::data::HasContent,
	                          ::kdm::data::WritesColumnSet,
	                          ::kdm::data::ProducesDataEvent,
	                          ::kdm::data::DataSegment,
	                          ::kdm::data::ContentElement,
	                          ::kdm::data::ManagesData > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::kdm::data::DataModel >
{
	typedef boost::mpl::list< ::kdm::kdm::KDMModel > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::kdm::KDMFramework,
	                          ::kdm::kdm::KDMModel > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::DataModel__dataElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::kdm::KDMFramework__audit_tag,
	                          ::kdm::kdm::KDMFramework__extensionFamily_tag,
	                          ::kdm::kdm::KDMFramework__name_tag,
	                          ::kdm::data::DataModel__dataElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::DataModel >
{
	static const char * get()
	{
		return "DataModel";
	}
};


template < >
struct name< ::kdm::data::DataModel__dataElement_tag >
{
	static const char * get()
	{
		return "dataElement";
	}
};


template < >
struct eclass< ::kdm::data::AbstractDataElement >
{
	typedef boost::mpl::list< ::kdm::core::KDMEntity > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::AbstractDataElement >
{
	static const char * get()
	{
		return "AbstractDataElement";
	}
};


template < >
struct name< ::kdm::data::AbstractDataElement__source_tag >
{
	static const char * get()
	{
		return "source";
	}
};


template < >
struct name< ::kdm::data::AbstractDataElement__dataRelation_tag >
{
	static const char * get()
	{
		return "dataRelation";
	}
};


template < >
struct name< ::kdm::data::AbstractDataElement__abstraction_tag >
{
	static const char * get()
	{
		return "abstraction";
	}
};


template < >
struct eclass< ::kdm::data::DataResource >
{
	typedef boost::mpl::list< ::kdm::data::AbstractDataElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::DataResource >
{
	static const char * get()
	{
		return "DataResource";
	}
};


template < >
struct eclass< ::kdm::data::IndexElement >
{
	typedef boost::mpl::list< ::kdm::data::DataResource > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::DataResource > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::IndexElement__implementation_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::IndexElement__implementation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::IndexElement >
{
	static const char * get()
	{
		return "IndexElement";
	}
};


template < >
struct name< ::kdm::data::IndexElement__implementation_tag >
{
	static const char * get()
	{
		return "implementation";
	}
};


template < >
struct eclass< ::kdm::data::UniqueKey >
{
	typedef boost::mpl::list< ::kdm::data::IndexElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::DataResource,
	                          ::kdm::data::IndexElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::IndexElement__implementation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::UniqueKey >
{
	static const char * get()
	{
		return "UniqueKey";
	}
};


template < >
struct eclass< ::kdm::data::Index >
{
	typedef boost::mpl::list< ::kdm::data::IndexElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::DataResource,
	                          ::kdm::data::IndexElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::IndexElement__implementation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::Index >
{
	static const char * get()
	{
		return "Index";
	}
};


template < >
struct eclass< ::kdm::data::AbstractDataRelationship >
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
struct name< ::kdm::data::AbstractDataRelationship >
{
	static const char * get()
	{
		return "AbstractDataRelationship";
	}
};


template < >
struct eclass< ::kdm::data::KeyRelation >
{
	typedef boost::mpl::list< ::kdm::data::AbstractDataRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::data::AbstractDataRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::KeyRelation__to_tag,
	                          ::kdm::data::KeyRelation__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::data::KeyRelation__to_tag,
	                          ::kdm::data::KeyRelation__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::KeyRelation >
{
	static const char * get()
	{
		return "KeyRelation";
	}
};


template < >
struct name< ::kdm::data::KeyRelation__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::data::KeyRelation__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::data::ReferenceKey >
{
	typedef boost::mpl::list< ::kdm::data::IndexElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::DataResource,
	                          ::kdm::data::IndexElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::IndexElement__implementation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::ReferenceKey >
{
	static const char * get()
	{
		return "ReferenceKey";
	}
};


template < >
struct eclass< ::kdm::data::DataContainer >
{
	typedef boost::mpl::list< ::kdm::data::DataResource > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::DataResource > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::DataContainer__dataElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::DataContainer__dataElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::DataContainer >
{
	static const char * get()
	{
		return "DataContainer";
	}
};


template < >
struct name< ::kdm::data::DataContainer__dataElement_tag >
{
	static const char * get()
	{
		return "dataElement";
	}
};


template < >
struct eclass< ::kdm::data::Catalog >
{
	typedef boost::mpl::list< ::kdm::data::DataContainer > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::DataResource,
	                          ::kdm::data::DataContainer > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::DataContainer__dataElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::Catalog >
{
	static const char * get()
	{
		return "Catalog";
	}
};


template < >
struct eclass< ::kdm::data::RelationalSchema >
{
	typedef boost::mpl::list< ::kdm::data::DataContainer > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::DataResource,
	                          ::kdm::data::DataContainer > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::RelationalSchema__codeElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::DataContainer__dataElement_tag,
	                          ::kdm::data::RelationalSchema__codeElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::RelationalSchema >
{
	static const char * get()
	{
		return "RelationalSchema";
	}
};


template < >
struct name< ::kdm::data::RelationalSchema__codeElement_tag >
{
	static const char * get()
	{
		return "codeElement";
	}
};


template < >
struct eclass< ::kdm::data::ColumnSet >
{
	typedef boost::mpl::list< ::kdm::data::DataContainer > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::DataResource,
	                          ::kdm::data::DataContainer > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::ColumnSet__itemUnit_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::DataContainer__dataElement_tag,
	                          ::kdm::data::ColumnSet__itemUnit_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::ColumnSet >
{
	static const char * get()
	{
		return "ColumnSet";
	}
};


template < >
struct name< ::kdm::data::ColumnSet__itemUnit_tag >
{
	static const char * get()
	{
		return "itemUnit";
	}
};


template < >
struct eclass< ::kdm::data::RelationalTable >
{
	typedef boost::mpl::list< ::kdm::data::ColumnSet > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::DataResource,
	                          ::kdm::data::DataContainer,
	                          ::kdm::data::ColumnSet > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::DataContainer__dataElement_tag,
	                          ::kdm::data::ColumnSet__itemUnit_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::RelationalTable >
{
	static const char * get()
	{
		return "RelationalTable";
	}
};


template < >
struct eclass< ::kdm::data::RelationalView >
{
	typedef boost::mpl::list< ::kdm::data::ColumnSet > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::DataResource,
	                          ::kdm::data::DataContainer,
	                          ::kdm::data::ColumnSet > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::DataContainer__dataElement_tag,
	                          ::kdm::data::ColumnSet__itemUnit_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::RelationalView >
{
	static const char * get()
	{
		return "RelationalView";
	}
};


template < >
struct eclass< ::kdm::data::RecordFile >
{
	typedef boost::mpl::list< ::kdm::data::ColumnSet > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::DataResource,
	                          ::kdm::data::DataContainer,
	                          ::kdm::data::ColumnSet > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::DataContainer__dataElement_tag,
	                          ::kdm::data::ColumnSet__itemUnit_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::RecordFile >
{
	static const char * get()
	{
		return "RecordFile";
	}
};


template < >
struct eclass< ::kdm::data::DataEvent >
{
	typedef boost::mpl::list< ::kdm::data::DataResource > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::DataResource > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::DataEvent__kind_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::DataEvent__kind_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::DataEvent >
{
	static const char * get()
	{
		return "DataEvent";
	}
};


template < >
struct name< ::kdm::data::DataEvent__kind_tag >
{
	static const char * get()
	{
		return "kind";
	}
};


template < >
struct eclass< ::kdm::data::XMLSchema >
{
	typedef boost::mpl::list< ::kdm::data::AbstractDataElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::XMLSchema__contentElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::XMLSchema__contentElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::XMLSchema >
{
	static const char * get()
	{
		return "XMLSchema";
	}
};


template < >
struct name< ::kdm::data::XMLSchema__contentElement_tag >
{
	static const char * get()
	{
		return "contentElement";
	}
};


template < >
struct eclass< ::kdm::data::AbstractContentElement >
{
	typedef boost::mpl::list< ::kdm::data::AbstractDataElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::AbstractContentElement >
{
	static const char * get()
	{
		return "AbstractContentElement";
	}
};


template < >
struct eclass< ::kdm::data::ComplexContentType >
{
	typedef boost::mpl::list< ::kdm::data::AbstractContentElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::AbstractContentElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::ComplexContentType__contentElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::ComplexContentType__contentElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::ComplexContentType >
{
	static const char * get()
	{
		return "ComplexContentType";
	}
};


template < >
struct name< ::kdm::data::ComplexContentType__contentElement_tag >
{
	static const char * get()
	{
		return "contentElement";
	}
};


template < >
struct eclass< ::kdm::data::AllContent >
{
	typedef boost::mpl::list< ::kdm::data::ComplexContentType > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::AbstractContentElement,
	                          ::kdm::data::ComplexContentType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::ComplexContentType__contentElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::AllContent >
{
	static const char * get()
	{
		return "AllContent";
	}
};


template < >
struct eclass< ::kdm::data::SeqContent >
{
	typedef boost::mpl::list< ::kdm::data::ComplexContentType > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::AbstractContentElement,
	                          ::kdm::data::ComplexContentType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::ComplexContentType__contentElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::SeqContent >
{
	static const char * get()
	{
		return "SeqContent";
	}
};


template < >
struct eclass< ::kdm::data::ChoiceContent >
{
	typedef boost::mpl::list< ::kdm::data::ComplexContentType > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::AbstractContentElement,
	                          ::kdm::data::ComplexContentType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::ComplexContentType__contentElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::ChoiceContent >
{
	static const char * get()
	{
		return "ChoiceContent";
	}
};


template < >
struct eclass< ::kdm::data::ContentItem >
{
	typedef boost::mpl::list< ::kdm::data::AbstractContentElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::AbstractContentElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::ContentItem__type_tag,
	                          ::kdm::data::ContentItem__contentElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::ContentItem__type_tag,
	                          ::kdm::data::ContentItem__contentElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::ContentItem >
{
	static const char * get()
	{
		return "ContentItem";
	}
};


template < >
struct name< ::kdm::data::ContentItem__type_tag >
{
	static const char * get()
	{
		return "type";
	}
};


template < >
struct name< ::kdm::data::ContentItem__contentElement_tag >
{
	static const char * get()
	{
		return "contentElement";
	}
};


template < >
struct eclass< ::kdm::data::GroupContent >
{
	typedef boost::mpl::list< ::kdm::data::ContentItem > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::AbstractContentElement,
	                          ::kdm::data::ContentItem > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::ContentItem__type_tag,
	                          ::kdm::data::ContentItem__contentElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::GroupContent >
{
	static const char * get()
	{
		return "GroupContent";
	}
};


template < >
struct eclass< ::kdm::data::ContentRestriction >
{
	typedef boost::mpl::list< ::kdm::data::AbstractContentElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::AbstractContentElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::ContentRestriction__kind_tag,
	                          ::kdm::data::ContentRestriction__value_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::ContentRestriction__kind_tag,
	                          ::kdm::data::ContentRestriction__value_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::ContentRestriction >
{
	static const char * get()
	{
		return "ContentRestriction";
	}
};


template < >
struct name< ::kdm::data::ContentRestriction__kind_tag >
{
	static const char * get()
	{
		return "kind";
	}
};


template < >
struct name< ::kdm::data::ContentRestriction__value_tag >
{
	static const char * get()
	{
		return "value";
	}
};


template < >
struct eclass< ::kdm::data::SimpleContentType >
{
	typedef boost::mpl::list< ::kdm::data::ComplexContentType > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::AbstractContentElement,
	                          ::kdm::data::ComplexContentType > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::SimpleContentType__type_tag,
	                          ::kdm::data::SimpleContentType__kind_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::ComplexContentType__contentElement_tag,
	                          ::kdm::data::SimpleContentType__type_tag,
	                          ::kdm::data::SimpleContentType__kind_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::SimpleContentType >
{
	static const char * get()
	{
		return "SimpleContentType";
	}
};


template < >
struct name< ::kdm::data::SimpleContentType__type_tag >
{
	static const char * get()
	{
		return "type";
	}
};


template < >
struct name< ::kdm::data::SimpleContentType__kind_tag >
{
	static const char * get()
	{
		return "kind";
	}
};


template < >
struct eclass< ::kdm::data::ExtendedDataElement >
{
	typedef boost::mpl::list< ::kdm::data::AbstractDataElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::ExtendedDataElement >
{
	static const char * get()
	{
		return "ExtendedDataElement";
	}
};


template < >
struct eclass< ::kdm::data::DataRelationship >
{
	typedef boost::mpl::list< ::kdm::data::AbstractDataRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::data::AbstractDataRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::DataRelationship__to_tag,
	                          ::kdm::data::DataRelationship__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::data::DataRelationship__to_tag,
	                          ::kdm::data::DataRelationship__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::DataRelationship >
{
	static const char * get()
	{
		return "DataRelationship";
	}
};


template < >
struct name< ::kdm::data::DataRelationship__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::data::DataRelationship__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::data::MixedContent >
{
	typedef boost::mpl::list< ::kdm::data::ComplexContentType > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::AbstractContentElement,
	                          ::kdm::data::ComplexContentType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::ComplexContentType__contentElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::MixedContent >
{
	static const char * get()
	{
		return "MixedContent";
	}
};


template < >
struct eclass< ::kdm::data::ContentReference >
{
	typedef boost::mpl::list< ::kdm::data::ContentItem > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::AbstractContentElement,
	                          ::kdm::data::ContentItem > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::ContentItem__type_tag,
	                          ::kdm::data::ContentItem__contentElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::ContentReference >
{
	static const char * get()
	{
		return "ContentReference";
	}
};


template < >
struct eclass< ::kdm::data::DataAction >
{
	typedef boost::mpl::list< ::kdm::data::AbstractDataElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::DataAction__kind_tag,
	                          ::kdm::data::DataAction__implementation_tag,
	                          ::kdm::data::DataAction__dataElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::DataAction__kind_tag,
	                          ::kdm::data::DataAction__implementation_tag,
	                          ::kdm::data::DataAction__dataElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::DataAction >
{
	static const char * get()
	{
		return "DataAction";
	}
};


template < >
struct name< ::kdm::data::DataAction__kind_tag >
{
	static const char * get()
	{
		return "kind";
	}
};


template < >
struct name< ::kdm::data::DataAction__implementation_tag >
{
	static const char * get()
	{
		return "implementation";
	}
};


template < >
struct name< ::kdm::data::DataAction__dataElement_tag >
{
	static const char * get()
	{
		return "dataElement";
	}
};


template < >
struct eclass< ::kdm::data::ReadsColumnSet >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::ReadsColumnSet__to_tag,
	                          ::kdm::data::ReadsColumnSet__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::data::ReadsColumnSet__to_tag,
	                          ::kdm::data::ReadsColumnSet__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::ReadsColumnSet >
{
	static const char * get()
	{
		return "ReadsColumnSet";
	}
};


template < >
struct name< ::kdm::data::ReadsColumnSet__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::data::ReadsColumnSet__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::data::ContentAttribute >
{
	typedef boost::mpl::list< ::kdm::data::ContentItem > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::AbstractContentElement,
	                          ::kdm::data::ContentItem > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::ContentItem__type_tag,
	                          ::kdm::data::ContentItem__contentElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::ContentAttribute >
{
	static const char * get()
	{
		return "ContentAttribute";
	}
};


template < >
struct eclass< ::kdm::data::TypedBy >
{
	typedef boost::mpl::list< ::kdm::data::AbstractDataRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::data::AbstractDataRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::TypedBy__to_tag,
	                          ::kdm::data::TypedBy__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::data::TypedBy__to_tag,
	                          ::kdm::data::TypedBy__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::TypedBy >
{
	static const char * get()
	{
		return "TypedBy";
	}
};


template < >
struct name< ::kdm::data::TypedBy__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::data::TypedBy__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::data::ReferenceTo >
{
	typedef boost::mpl::list< ::kdm::data::AbstractDataRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::data::AbstractDataRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::ReferenceTo__to_tag,
	                          ::kdm::data::ReferenceTo__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::data::ReferenceTo__to_tag,
	                          ::kdm::data::ReferenceTo__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::ReferenceTo >
{
	static const char * get()
	{
		return "ReferenceTo";
	}
};


template < >
struct name< ::kdm::data::ReferenceTo__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::data::ReferenceTo__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::data::RestrictionOf >
{
	typedef boost::mpl::list< ::kdm::data::AbstractDataRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::data::AbstractDataRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::RestrictionOf__to_tag,
	                          ::kdm::data::RestrictionOf__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::data::RestrictionOf__to_tag,
	                          ::kdm::data::RestrictionOf__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::RestrictionOf >
{
	static const char * get()
	{
		return "RestrictionOf";
	}
};


template < >
struct name< ::kdm::data::RestrictionOf__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::data::RestrictionOf__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::data::ExtensionTo >
{
	typedef boost::mpl::list< ::kdm::data::AbstractDataRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::data::AbstractDataRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::ExtensionTo__to_tag,
	                          ::kdm::data::ExtensionTo__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::data::ExtensionTo__to_tag,
	                          ::kdm::data::ExtensionTo__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::ExtensionTo >
{
	static const char * get()
	{
		return "ExtensionTo";
	}
};


template < >
struct name< ::kdm::data::ExtensionTo__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::data::ExtensionTo__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::data::DatatypeOf >
{
	typedef boost::mpl::list< ::kdm::data::AbstractDataRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::data::AbstractDataRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::DatatypeOf__to_tag,
	                          ::kdm::data::DatatypeOf__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::data::DatatypeOf__to_tag,
	                          ::kdm::data::DatatypeOf__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::DatatypeOf >
{
	static const char * get()
	{
		return "DatatypeOf";
	}
};


template < >
struct name< ::kdm::data::DatatypeOf__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::data::DatatypeOf__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::data::HasContent >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::HasContent__to_tag,
	                          ::kdm::data::HasContent__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::data::HasContent__to_tag,
	                          ::kdm::data::HasContent__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::HasContent >
{
	static const char * get()
	{
		return "HasContent";
	}
};


template < >
struct name< ::kdm::data::HasContent__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::data::HasContent__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::data::WritesColumnSet >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::WritesColumnSet__to_tag,
	                          ::kdm::data::WritesColumnSet__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::data::WritesColumnSet__to_tag,
	                          ::kdm::data::WritesColumnSet__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::WritesColumnSet >
{
	static const char * get()
	{
		return "WritesColumnSet";
	}
};


template < >
struct name< ::kdm::data::WritesColumnSet__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::data::WritesColumnSet__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::data::ProducesDataEvent >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::ProducesDataEvent__to_tag,
	                          ::kdm::data::ProducesDataEvent__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::data::ProducesDataEvent__to_tag,
	                          ::kdm::data::ProducesDataEvent__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::ProducesDataEvent >
{
	static const char * get()
	{
		return "ProducesDataEvent";
	}
};


template < >
struct name< ::kdm::data::ProducesDataEvent__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::data::ProducesDataEvent__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct eclass< ::kdm::data::DataSegment >
{
	typedef boost::mpl::list< ::kdm::data::ColumnSet > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::DataResource,
	                          ::kdm::data::DataContainer,
	                          ::kdm::data::ColumnSet > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::DataContainer__dataElement_tag,
	                          ::kdm::data::ColumnSet__itemUnit_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::DataSegment >
{
	static const char * get()
	{
		return "DataSegment";
	}
};


template < >
struct eclass< ::kdm::data::ContentElement >
{
	typedef boost::mpl::list< ::kdm::data::ContentItem > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::data::AbstractDataElement,
	                          ::kdm::data::AbstractContentElement,
	                          ::kdm::data::ContentItem > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag,
	                          ::kdm::data::AbstractDataElement__source_tag,
	                          ::kdm::data::AbstractDataElement__dataRelation_tag,
	                          ::kdm::data::AbstractDataElement__abstraction_tag,
	                          ::kdm::data::ContentItem__type_tag,
	                          ::kdm::data::ContentItem__contentElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::ContentElement >
{
	static const char * get()
	{
		return "ContentElement";
	}
};


template < >
struct eclass< ::kdm::data::ManagesData >
{
	typedef boost::mpl::list< ::kdm::action::AbstractActionRelationship > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::action::AbstractActionRelationship > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::data::ManagesData__to_tag,
	                          ::kdm::data::ManagesData__from_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::data::ManagesData__to_tag,
	                          ::kdm::data::ManagesData__from_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::data::ManagesData >
{
	static const char * get()
	{
		return "ManagesData";
	}
};


template < >
struct name< ::kdm::data::ManagesData__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::data::ManagesData__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_KDM_DATA_Meta_HPP
