
#ifndef EMF_CPP_KDM_KDM_META_HPP
#define EMF_CPP_KDM_KDM_META_HPP

#include <kdm/kdm/fwd.hpp>

#include <kdm/core/fwd.hpp>

namespace kdm
{
namespace kdm
{



struct KDMFramework__audit_tag
{
	typedef KDMFramework eClass;
	typedef ::kdm::kdm::Audit eReferenceType;
	typedef KDMFramework__audit_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct KDMFramework__extensionFamily_tag
{
	typedef KDMFramework eClass;
	typedef ::kdm::kdm::ExtensionFamily eReferenceType;
	typedef KDMFramework__extensionFamily_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct KDMFramework__name_tag
{
	typedef KDMFramework eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Audit__description_tag
{
	typedef Audit eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Audit__author_tag
{
	typedef Audit eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Audit__date_tag
{
	typedef Audit eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Segment__segment_tag
{
	typedef Segment eClass;
	typedef ::kdm::kdm::Segment eReferenceType;
	typedef Segment__segment_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Segment__model_tag
{
	typedef Segment eClass;
	typedef ::kdm::kdm::KDMModel eReferenceType;
	typedef Segment__model_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Attribute__tag_tag
{
	typedef Attribute eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Attribute__value_tag
{
	typedef Attribute eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Annotation__text_tag
{
	typedef Annotation eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct TagDefinition__tag_tag
{
	typedef TagDefinition eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct TagDefinition__type_tag
{
	typedef TagDefinition eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct ExtendedValue__tag_tag
{
	typedef ExtendedValue eClass;
	typedef ::kdm::kdm::TagDefinition eReferenceType;
	typedef ExtendedValue__tag_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Stereotype__tag_tag
{
	typedef Stereotype eClass;
	typedef ::kdm::kdm::TagDefinition eReferenceType;
	typedef Stereotype__tag_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Stereotype__name_tag
{
	typedef Stereotype eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct Stereotype__type_tag
{
	typedef Stereotype eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct ExtensionFamily__stereotype_tag
{
	typedef ExtensionFamily eClass;
	typedef ::kdm::kdm::Stereotype eReferenceType;
	typedef ExtensionFamily__stereotype_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ExtensionFamily__name_tag
{
	typedef ExtensionFamily eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct TaggedRef__reference_tag
{
	typedef TaggedRef eClass;
	typedef ::kdm::core::ModelElement eReferenceType;
	typedef TaggedRef__reference_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct TaggedValue__value_tag
{
	typedef TaggedValue eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};


} // kdm
} // kdm


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::kdm::kdm::KdmPackage >
{
	typedef boost::mpl::list< ::kdm::kdm::KDMFramework,
	                          ::kdm::kdm::KDMModel,
	                          ::kdm::kdm::Audit,
	                          ::kdm::kdm::Segment,
	                          ::kdm::kdm::Attribute,
	                          ::kdm::kdm::Annotation,
	                          ::kdm::kdm::TagDefinition,
	                          ::kdm::kdm::ExtendedValue,
	                          ::kdm::kdm::Stereotype,
	                          ::kdm::kdm::ExtensionFamily,
	                          ::kdm::kdm::TaggedRef,
	                          ::kdm::kdm::TaggedValue > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::kdm::kdm::KDMFramework >
{
	typedef boost::mpl::list< ::kdm::core::ModelElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::kdm::KDMFramework__audit_tag,
	                          ::kdm::kdm::KDMFramework__extensionFamily_tag,
	                          ::kdm::kdm::KDMFramework__name_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::kdm::KDMFramework__audit_tag,
	                          ::kdm::kdm::KDMFramework__extensionFamily_tag,
	                          ::kdm::kdm::KDMFramework__name_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::kdm::KDMFramework >
{
	static const char * get()
	{
		return "KDMFramework";
	}
};


template < >
struct name< ::kdm::kdm::KDMFramework__audit_tag >
{
	static const char * get()
	{
		return "audit";
	}
};


template < >
struct name< ::kdm::kdm::KDMFramework__extensionFamily_tag >
{
	static const char * get()
	{
		return "extensionFamily";
	}
};


template < >
struct name< ::kdm::kdm::KDMFramework__name_tag >
{
	static const char * get()
	{
		return "name";
	}
};


template < >
struct eclass< ::kdm::kdm::KDMModel >
{
	typedef boost::mpl::list< ::kdm::kdm::KDMFramework > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::kdm::KDMFramework > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::kdm::KDMFramework__audit_tag,
	                          ::kdm::kdm::KDMFramework__extensionFamily_tag,
	                          ::kdm::kdm::KDMFramework__name_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::kdm::KDMModel >
{
	static const char * get()
	{
		return "KDMModel";
	}
};


template < >
struct eclass< ::kdm::kdm::Audit >
{
	typedef boost::mpl::list< ::kdm::core::Element > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::kdm::Audit__description_tag,
	                          ::kdm::kdm::Audit__author_tag,
	                          ::kdm::kdm::Audit__date_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::kdm::Audit__description_tag,
	                          ::kdm::kdm::Audit__author_tag,
	                          ::kdm::kdm::Audit__date_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::kdm::Audit >
{
	static const char * get()
	{
		return "Audit";
	}
};


template < >
struct name< ::kdm::kdm::Audit__description_tag >
{
	static const char * get()
	{
		return "description";
	}
};


template < >
struct name< ::kdm::kdm::Audit__author_tag >
{
	static const char * get()
	{
		return "author";
	}
};


template < >
struct name< ::kdm::kdm::Audit__date_tag >
{
	static const char * get()
	{
		return "date";
	}
};


template < >
struct eclass< ::kdm::kdm::Segment >
{
	typedef boost::mpl::list< ::kdm::kdm::KDMFramework > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::kdm::KDMFramework > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::kdm::Segment__segment_tag,
	                          ::kdm::kdm::Segment__model_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::kdm::KDMFramework__audit_tag,
	                          ::kdm::kdm::KDMFramework__extensionFamily_tag,
	                          ::kdm::kdm::KDMFramework__name_tag,
	                          ::kdm::kdm::Segment__segment_tag,
	                          ::kdm::kdm::Segment__model_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::kdm::Segment >
{
	static const char * get()
	{
		return "Segment";
	}
};


template < >
struct name< ::kdm::kdm::Segment__segment_tag >
{
	static const char * get()
	{
		return "segment";
	}
};


template < >
struct name< ::kdm::kdm::Segment__model_tag >
{
	static const char * get()
	{
		return "model";
	}
};


template < >
struct eclass< ::kdm::kdm::Attribute >
{
	typedef boost::mpl::list< ::kdm::core::Element > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::kdm::Attribute__tag_tag,
	                          ::kdm::kdm::Attribute__value_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::kdm::Attribute__tag_tag,
	                          ::kdm::kdm::Attribute__value_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::kdm::Attribute >
{
	static const char * get()
	{
		return "Attribute";
	}
};


template < >
struct name< ::kdm::kdm::Attribute__tag_tag >
{
	static const char * get()
	{
		return "tag";
	}
};


template < >
struct name< ::kdm::kdm::Attribute__value_tag >
{
	static const char * get()
	{
		return "value";
	}
};


template < >
struct eclass< ::kdm::kdm::Annotation >
{
	typedef boost::mpl::list< ::kdm::core::Element > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::kdm::Annotation__text_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::kdm::Annotation__text_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::kdm::Annotation >
{
	static const char * get()
	{
		return "Annotation";
	}
};


template < >
struct name< ::kdm::kdm::Annotation__text_tag >
{
	static const char * get()
	{
		return "text";
	}
};


template < >
struct eclass< ::kdm::kdm::TagDefinition >
{
	typedef boost::mpl::list< ::kdm::core::Element > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::kdm::TagDefinition__tag_tag,
	                          ::kdm::kdm::TagDefinition__type_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::kdm::TagDefinition__tag_tag,
	                          ::kdm::kdm::TagDefinition__type_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::kdm::TagDefinition >
{
	static const char * get()
	{
		return "TagDefinition";
	}
};


template < >
struct name< ::kdm::kdm::TagDefinition__tag_tag >
{
	static const char * get()
	{
		return "tag";
	}
};


template < >
struct name< ::kdm::kdm::TagDefinition__type_tag >
{
	static const char * get()
	{
		return "type";
	}
};


template < >
struct eclass< ::kdm::kdm::ExtendedValue >
{
	typedef boost::mpl::list< ::kdm::core::Element > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::kdm::ExtendedValue__tag_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::kdm::ExtendedValue__tag_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::kdm::ExtendedValue >
{
	static const char * get()
	{
		return "ExtendedValue";
	}
};


template < >
struct name< ::kdm::kdm::ExtendedValue__tag_tag >
{
	static const char * get()
	{
		return "tag";
	}
};


template < >
struct eclass< ::kdm::kdm::Stereotype >
{
	typedef boost::mpl::list< ::kdm::core::Element > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::kdm::Stereotype__tag_tag,
	                          ::kdm::kdm::Stereotype__name_tag,
	                          ::kdm::kdm::Stereotype__type_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::kdm::Stereotype__tag_tag,
	                          ::kdm::kdm::Stereotype__name_tag,
	                          ::kdm::kdm::Stereotype__type_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::kdm::Stereotype >
{
	static const char * get()
	{
		return "Stereotype";
	}
};


template < >
struct name< ::kdm::kdm::Stereotype__tag_tag >
{
	static const char * get()
	{
		return "tag";
	}
};


template < >
struct name< ::kdm::kdm::Stereotype__name_tag >
{
	static const char * get()
	{
		return "name";
	}
};


template < >
struct name< ::kdm::kdm::Stereotype__type_tag >
{
	static const char * get()
	{
		return "type";
	}
};


template < >
struct eclass< ::kdm::kdm::ExtensionFamily >
{
	typedef boost::mpl::list< ::kdm::core::Element > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::kdm::ExtensionFamily__stereotype_tag,
	                          ::kdm::kdm::ExtensionFamily__name_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::kdm::ExtensionFamily__stereotype_tag,
	                          ::kdm::kdm::ExtensionFamily__name_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::kdm::ExtensionFamily >
{
	static const char * get()
	{
		return "ExtensionFamily";
	}
};


template < >
struct name< ::kdm::kdm::ExtensionFamily__stereotype_tag >
{
	static const char * get()
	{
		return "stereotype";
	}
};


template < >
struct name< ::kdm::kdm::ExtensionFamily__name_tag >
{
	static const char * get()
	{
		return "name";
	}
};


template < >
struct eclass< ::kdm::kdm::TaggedRef >
{
	typedef boost::mpl::list< ::kdm::kdm::ExtendedValue > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::kdm::ExtendedValue > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::kdm::TaggedRef__reference_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::kdm::ExtendedValue__tag_tag,
	                          ::kdm::kdm::TaggedRef__reference_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::kdm::TaggedRef >
{
	static const char * get()
	{
		return "TaggedRef";
	}
};


template < >
struct name< ::kdm::kdm::TaggedRef__reference_tag >
{
	static const char * get()
	{
		return "reference";
	}
};


template < >
struct eclass< ::kdm::kdm::TaggedValue >
{
	typedef boost::mpl::list< ::kdm::kdm::ExtendedValue > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::kdm::ExtendedValue > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::kdm::TaggedValue__value_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::kdm::ExtendedValue__tag_tag,
	                          ::kdm::kdm::TaggedValue__value_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::kdm::TaggedValue >
{
	static const char * get()
	{
		return "TaggedValue";
	}
};


template < >
struct name< ::kdm::kdm::TaggedValue__value_tag >
{
	static const char * get()
	{
		return "value";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_KDM_KDM_Meta_HPP
