
#ifndef EMF_CPP_EMOF_META_HPP
#define EMF_CPP_EMOF_META_HPP

#include <e4c/definition.hpp>
#include <emof/fwd.hpp>


namespace emof
{



struct Class__isAbstract_tag
{
	typedef Class eClass;
	typedef ::emof::Boolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Class__ownedAttribute_tag
{
	typedef Class eClass;
	typedef ::emof::Property eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::emof::Property__class_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Class__ownedOperation_tag
{
	typedef Class eClass;
	typedef ::emof::Operation eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::emof::Operation__class_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Class__superClass_tag
{
	typedef Class eClass;
	typedef ::emof::Class eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Class__superClass_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Comment__annotatedElement_tag
{
	typedef Comment eClass;
	typedef ::emof::NamedElement eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Comment__annotatedElement_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Element__ownedComment_tag
{
	typedef Element eClass;
	typedef ::emof::Comment eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Element__ownedComment_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Element__tag_tag
{
	typedef Element eClass;
	typedef ::emof::Tag eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::emof::Tag__element_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Enumeration__ownedLiteral_tag
{
	typedef Enumeration eClass;
	typedef ::emof::EnumerationLiteral eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::emof::EnumerationLiteral__enumeration_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct EnumerationLiteral__enumeration_tag
{
	typedef EnumerationLiteral eClass;
	typedef ::emof::Enumeration eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::emof::Enumeration__ownedLiteral_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct MultiplicityElement__isOrdered_tag
{
	typedef MultiplicityElement eClass;
	typedef ::emof::Boolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct MultiplicityElement__isUnique_tag
{
	typedef MultiplicityElement eClass;
	typedef ::emof::Boolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct MultiplicityElement__lower_tag
{
	typedef MultiplicityElement eClass;
	typedef ::emof::Integer eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct MultiplicityElement__upper_tag
{
	typedef MultiplicityElement eClass;
	typedef ::emof::UnlimitedNatural eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct NamedElement__name_tag
{
	typedef NamedElement eClass;
	typedef ::emof::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Operation__class_tag
{
	typedef Operation eClass;
	typedef ::emof::Class eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::emof::Class__ownedOperation_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Operation__ownedParameter_tag
{
	typedef Operation eClass;
	typedef ::emof::Parameter eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::emof::Parameter__operation_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Operation__raisedException_tag
{
	typedef Operation eClass;
	typedef ::emof::Type eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Operation__raisedException_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Package__nestedPackage_tag
{
	typedef Package eClass;
	typedef ::emof::Package eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Package__nestedPackage_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Package__ownedType_tag
{
	typedef Package eClass;
	typedef ::emof::Type eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::emof::Type__package_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Package__uri_tag
{
	typedef Package eClass;
	typedef ::emof::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Parameter__operation_tag
{
	typedef Parameter eClass;
	typedef ::emof::Operation eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::emof::Operation__ownedParameter_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Property__class_tag
{
	typedef Property eClass;
	typedef ::emof::Class eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::emof::Class__ownedAttribute_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Property__default_tag
{
	typedef Property eClass;
	typedef ::emof::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Property__isComposite_tag
{
	typedef Property eClass;
	typedef ::emof::Boolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Property__isDerived_tag
{
	typedef Property eClass;
	typedef ::emof::Boolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Property__isId_tag
{
	typedef Property eClass;
	typedef ::emof::Boolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Property__isReadOnly_tag
{
	typedef Property eClass;
	typedef ::emof::Boolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Property__opposite_tag
{
	typedef Property eClass;
	typedef ::emof::Property eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Property__opposite_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Tag__element_tag
{
	typedef Tag eClass;
	typedef ::emof::Element eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = true; 
	typedef ::emof::Element__tag_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Tag__name_tag
{
	typedef Tag eClass;
	typedef ::emof::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Tag__value_tag
{
	typedef Tag eClass;
	typedef ::emof::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Type__package_tag
{
	typedef Type eClass;
	typedef ::emof::Package eReferenceType;
	static const bool containment = false;
	static const bool container = true;
	static const bool hasOpposite = true; 
	typedef ::emof::Package__ownedType_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct TypedElement__type_tag
{
	typedef TypedElement eClass;
	typedef ::emof::Type eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef TypedElement__type_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};


} // emof


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::emof::EmofPackage >
{
	typedef boost::mpl::list< ::emof::Class,
	                          ::emof::Comment,
	                          ::emof::DataType,
	                          ::emof::Element,
	                          ::emof::Enumeration,
	                          ::emof::EnumerationLiteral,
	                          ::emof::Extent,
	                          ::emof::MultiplicityElement,
	                          ::emof::NamedElement,
	                          ::emof::Object,
	                          ::emof::Operation,
	                          ::emof::Package,
	                          ::emof::Parameter,
	                          ::emof::PrimitiveType,
	                          ::emof::Property,
	                          ::emof::Tag,
	                          ::emof::Type,
	                          ::emof::TypedElement,
	                          ::emof::URIExtent > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::emof::Class >
{
	typedef boost::mpl::list< ::emof::Type > eSuperTypes;
	typedef boost::mpl::list< ::emof::Object,
	                          ::emof::Element,
	                          ::emof::NamedElement,
	                          ::emof::Type > eAllSuperTypes;
	typedef boost::mpl::list< ::emof::Class__isAbstract_tag,
	                          ::emof::Class__ownedAttribute_tag,
	                          ::emof::Class__ownedOperation_tag,
	                          ::emof::Class__superClass_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::emof::Element__ownedComment_tag,
	                          ::emof::Element__tag_tag,
	                          ::emof::NamedElement__name_tag,
	                          ::emof::Type__package_tag,
	                          ::emof::Class__isAbstract_tag,
	                          ::emof::Class__ownedAttribute_tag,
	                          ::emof::Class__ownedOperation_tag,
	                          ::emof::Class__superClass_tag > eAllStructuralFeatures;
};

template < >
struct name< ::emof::Class >
{
	static const char * get()
	{
		return "Class";
	}
};


template < >
struct name< ::emof::Class__isAbstract_tag >
{
	static const char * get()
	{
		return "isAbstract";
	}
};


template < >
struct name< ::emof::Class__ownedAttribute_tag >
{
	static const char * get()
	{
		return "ownedAttribute";
	}
};


template < >
struct name< ::emof::Class__ownedOperation_tag >
{
	static const char * get()
	{
		return "ownedOperation";
	}
};


template < >
struct name< ::emof::Class__superClass_tag >
{
	static const char * get()
	{
		return "superClass";
	}
};


template < >
struct eclass< ::emof::Comment >
{
	typedef boost::mpl::list< ::emof::Element > eSuperTypes;
	typedef boost::mpl::list< ::emof::Object,
	                          ::emof::Element > eAllSuperTypes;
	typedef boost::mpl::list< ::emof::Comment__annotatedElement_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::emof::Element__ownedComment_tag,
	                          ::emof::Element__tag_tag,
	                          ::emof::Comment__annotatedElement_tag > eAllStructuralFeatures;
};

template < >
struct name< ::emof::Comment >
{
	static const char * get()
	{
		return "Comment";
	}
};


template < >
struct name< ::emof::Comment__annotatedElement_tag >
{
	static const char * get()
	{
		return "annotatedElement";
	}
};


template < >
struct eclass< ::emof::DataType >
{
	typedef boost::mpl::list< ::emof::Type > eSuperTypes;
	typedef boost::mpl::list< ::emof::Object,
	                          ::emof::Element,
	                          ::emof::NamedElement,
	                          ::emof::Type > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::emof::Element__ownedComment_tag,
	                          ::emof::Element__tag_tag,
	                          ::emof::NamedElement__name_tag,
	                          ::emof::Type__package_tag > eAllStructuralFeatures;
};

template < >
struct name< ::emof::DataType >
{
	static const char * get()
	{
		return "DataType";
	}
};


template < >
struct eclass< ::emof::Element >
{
	typedef boost::mpl::list< ::emof::Object > eSuperTypes;
	typedef boost::mpl::list< ::emof::Object > eAllSuperTypes;
	typedef boost::mpl::list< ::emof::Element__ownedComment_tag,
	                          ::emof::Element__tag_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::emof::Element__ownedComment_tag,
	                          ::emof::Element__tag_tag > eAllStructuralFeatures;
};

template < >
struct name< ::emof::Element >
{
	static const char * get()
	{
		return "Element";
	}
};


template < >
struct name< ::emof::Element__ownedComment_tag >
{
	static const char * get()
	{
		return "ownedComment";
	}
};


template < >
struct name< ::emof::Element__tag_tag >
{
	static const char * get()
	{
		return "tag";
	}
};


template < >
struct eclass< ::emof::Enumeration >
{
	typedef boost::mpl::list< ::emof::DataType > eSuperTypes;
	typedef boost::mpl::list< ::emof::Object,
	                          ::emof::Element,
	                          ::emof::NamedElement,
	                          ::emof::Type,
	                          ::emof::DataType > eAllSuperTypes;
	typedef boost::mpl::list< ::emof::Enumeration__ownedLiteral_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::emof::Element__ownedComment_tag,
	                          ::emof::Element__tag_tag,
	                          ::emof::NamedElement__name_tag,
	                          ::emof::Type__package_tag,
	                          ::emof::Enumeration__ownedLiteral_tag > eAllStructuralFeatures;
};

template < >
struct name< ::emof::Enumeration >
{
	static const char * get()
	{
		return "Enumeration";
	}
};


template < >
struct name< ::emof::Enumeration__ownedLiteral_tag >
{
	static const char * get()
	{
		return "ownedLiteral";
	}
};


template < >
struct eclass< ::emof::EnumerationLiteral >
{
	typedef boost::mpl::list< ::emof::NamedElement > eSuperTypes;
	typedef boost::mpl::list< ::emof::Object,
	                          ::emof::Element,
	                          ::emof::NamedElement > eAllSuperTypes;
	typedef boost::mpl::list< ::emof::EnumerationLiteral__enumeration_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::emof::Element__ownedComment_tag,
	                          ::emof::Element__tag_tag,
	                          ::emof::NamedElement__name_tag,
	                          ::emof::EnumerationLiteral__enumeration_tag > eAllStructuralFeatures;
};

template < >
struct name< ::emof::EnumerationLiteral >
{
	static const char * get()
	{
		return "EnumerationLiteral";
	}
};


template < >
struct name< ::emof::EnumerationLiteral__enumeration_tag >
{
	static const char * get()
	{
		return "enumeration";
	}
};


template < >
struct eclass< ::emof::Extent >
{
	typedef boost::mpl::list< ::emof::Object > eSuperTypes;
	typedef boost::mpl::list< ::emof::Object > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::emof::Extent >
{
	static const char * get()
	{
		return "Extent";
	}
};


template < >
struct eclass< ::emof::MultiplicityElement >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::emof::MultiplicityElement__isOrdered_tag,
	                          ::emof::MultiplicityElement__isUnique_tag,
	                          ::emof::MultiplicityElement__lower_tag,
	                          ::emof::MultiplicityElement__upper_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::emof::MultiplicityElement__isOrdered_tag,
	                          ::emof::MultiplicityElement__isUnique_tag,
	                          ::emof::MultiplicityElement__lower_tag,
	                          ::emof::MultiplicityElement__upper_tag > eAllStructuralFeatures;
};

template < >
struct name< ::emof::MultiplicityElement >
{
	static const char * get()
	{
		return "MultiplicityElement";
	}
};


template < >
struct name< ::emof::MultiplicityElement__isOrdered_tag >
{
	static const char * get()
	{
		return "isOrdered";
	}
};


template < >
struct name< ::emof::MultiplicityElement__isUnique_tag >
{
	static const char * get()
	{
		return "isUnique";
	}
};


template < >
struct name< ::emof::MultiplicityElement__lower_tag >
{
	static const char * get()
	{
		return "lower";
	}
};


template < >
struct name< ::emof::MultiplicityElement__upper_tag >
{
	static const char * get()
	{
		return "upper";
	}
};


template < >
struct eclass< ::emof::NamedElement >
{
	typedef boost::mpl::list< ::emof::Element > eSuperTypes;
	typedef boost::mpl::list< ::emof::Object,
	                          ::emof::Element > eAllSuperTypes;
	typedef boost::mpl::list< ::emof::NamedElement__name_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::emof::Element__ownedComment_tag,
	                          ::emof::Element__tag_tag,
	                          ::emof::NamedElement__name_tag > eAllStructuralFeatures;
};

template < >
struct name< ::emof::NamedElement >
{
	static const char * get()
	{
		return "NamedElement";
	}
};


template < >
struct name< ::emof::NamedElement__name_tag >
{
	static const char * get()
	{
		return "name";
	}
};


template < >
struct eclass< ::emof::Object >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::emof::Object >
{
	static const char * get()
	{
		return "Object";
	}
};


template < >
struct eclass< ::emof::Operation >
{
	typedef boost::mpl::list< ::emof::TypedElement,
	                          ::emof::MultiplicityElement > eSuperTypes;
	typedef boost::mpl::list< ::emof::Object,
	                          ::emof::Element,
	                          ::emof::NamedElement,
	                          ::emof::TypedElement,
	                          ::emof::MultiplicityElement > eAllSuperTypes;
	typedef boost::mpl::list< ::emof::Operation__class_tag,
	                          ::emof::Operation__ownedParameter_tag,
	                          ::emof::Operation__raisedException_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::emof::Element__ownedComment_tag,
	                          ::emof::Element__tag_tag,
	                          ::emof::NamedElement__name_tag,
	                          ::emof::TypedElement__type_tag,
	                          ::emof::MultiplicityElement__isOrdered_tag,
	                          ::emof::MultiplicityElement__isUnique_tag,
	                          ::emof::MultiplicityElement__lower_tag,
	                          ::emof::MultiplicityElement__upper_tag,
	                          ::emof::Operation__class_tag,
	                          ::emof::Operation__ownedParameter_tag,
	                          ::emof::Operation__raisedException_tag > eAllStructuralFeatures;
};

template < >
struct name< ::emof::Operation >
{
	static const char * get()
	{
		return "Operation";
	}
};


template < >
struct name< ::emof::Operation__class_tag >
{
	static const char * get()
	{
		return "class";
	}
};


template < >
struct name< ::emof::Operation__ownedParameter_tag >
{
	static const char * get()
	{
		return "ownedParameter";
	}
};


template < >
struct name< ::emof::Operation__raisedException_tag >
{
	static const char * get()
	{
		return "raisedException";
	}
};


template < >
struct eclass< ::emof::Package >
{
	typedef boost::mpl::list< ::emof::NamedElement > eSuperTypes;
	typedef boost::mpl::list< ::emof::Object,
	                          ::emof::Element,
	                          ::emof::NamedElement > eAllSuperTypes;
	typedef boost::mpl::list< ::emof::Package__nestedPackage_tag,
	                          ::emof::Package__ownedType_tag,
	                          ::emof::Package__uri_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::emof::Element__ownedComment_tag,
	                          ::emof::Element__tag_tag,
	                          ::emof::NamedElement__name_tag,
	                          ::emof::Package__nestedPackage_tag,
	                          ::emof::Package__ownedType_tag,
	                          ::emof::Package__uri_tag > eAllStructuralFeatures;
};

template < >
struct name< ::emof::Package >
{
	static const char * get()
	{
		return "Package";
	}
};


template < >
struct name< ::emof::Package__nestedPackage_tag >
{
	static const char * get()
	{
		return "nestedPackage";
	}
};


template < >
struct name< ::emof::Package__ownedType_tag >
{
	static const char * get()
	{
		return "ownedType";
	}
};


template < >
struct name< ::emof::Package__uri_tag >
{
	static const char * get()
	{
		return "uri";
	}
};


template < >
struct eclass< ::emof::Parameter >
{
	typedef boost::mpl::list< ::emof::TypedElement,
	                          ::emof::MultiplicityElement > eSuperTypes;
	typedef boost::mpl::list< ::emof::Object,
	                          ::emof::Element,
	                          ::emof::NamedElement,
	                          ::emof::TypedElement,
	                          ::emof::MultiplicityElement > eAllSuperTypes;
	typedef boost::mpl::list< ::emof::Parameter__operation_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::emof::Element__ownedComment_tag,
	                          ::emof::Element__tag_tag,
	                          ::emof::NamedElement__name_tag,
	                          ::emof::TypedElement__type_tag,
	                          ::emof::MultiplicityElement__isOrdered_tag,
	                          ::emof::MultiplicityElement__isUnique_tag,
	                          ::emof::MultiplicityElement__lower_tag,
	                          ::emof::MultiplicityElement__upper_tag,
	                          ::emof::Parameter__operation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::emof::Parameter >
{
	static const char * get()
	{
		return "Parameter";
	}
};


template < >
struct name< ::emof::Parameter__operation_tag >
{
	static const char * get()
	{
		return "operation";
	}
};


template < >
struct eclass< ::emof::PrimitiveType >
{
	typedef boost::mpl::list< ::emof::DataType > eSuperTypes;
	typedef boost::mpl::list< ::emof::Object,
	                          ::emof::Element,
	                          ::emof::NamedElement,
	                          ::emof::Type,
	                          ::emof::DataType > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::emof::Element__ownedComment_tag,
	                          ::emof::Element__tag_tag,
	                          ::emof::NamedElement__name_tag,
	                          ::emof::Type__package_tag > eAllStructuralFeatures;
};

template < >
struct name< ::emof::PrimitiveType >
{
	static const char * get()
	{
		return "PrimitiveType";
	}
};


template < >
struct eclass< ::emof::Property >
{
	typedef boost::mpl::list< ::emof::TypedElement,
	                          ::emof::MultiplicityElement > eSuperTypes;
	typedef boost::mpl::list< ::emof::Object,
	                          ::emof::Element,
	                          ::emof::NamedElement,
	                          ::emof::TypedElement,
	                          ::emof::MultiplicityElement > eAllSuperTypes;
	typedef boost::mpl::list< ::emof::Property__class_tag,
	                          ::emof::Property__default_tag,
	                          ::emof::Property__isComposite_tag,
	                          ::emof::Property__isDerived_tag,
	                          ::emof::Property__isId_tag,
	                          ::emof::Property__isReadOnly_tag,
	                          ::emof::Property__opposite_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::emof::Element__ownedComment_tag,
	                          ::emof::Element__tag_tag,
	                          ::emof::NamedElement__name_tag,
	                          ::emof::TypedElement__type_tag,
	                          ::emof::MultiplicityElement__isOrdered_tag,
	                          ::emof::MultiplicityElement__isUnique_tag,
	                          ::emof::MultiplicityElement__lower_tag,
	                          ::emof::MultiplicityElement__upper_tag,
	                          ::emof::Property__class_tag,
	                          ::emof::Property__default_tag,
	                          ::emof::Property__isComposite_tag,
	                          ::emof::Property__isDerived_tag,
	                          ::emof::Property__isId_tag,
	                          ::emof::Property__isReadOnly_tag,
	                          ::emof::Property__opposite_tag > eAllStructuralFeatures;
};

template < >
struct name< ::emof::Property >
{
	static const char * get()
	{
		return "Property";
	}
};


template < >
struct name< ::emof::Property__class_tag >
{
	static const char * get()
	{
		return "class";
	}
};


template < >
struct name< ::emof::Property__default_tag >
{
	static const char * get()
	{
		return "default";
	}
};


template < >
struct name< ::emof::Property__isComposite_tag >
{
	static const char * get()
	{
		return "isComposite";
	}
};


template < >
struct name< ::emof::Property__isDerived_tag >
{
	static const char * get()
	{
		return "isDerived";
	}
};


template < >
struct name< ::emof::Property__isId_tag >
{
	static const char * get()
	{
		return "isId";
	}
};


template < >
struct name< ::emof::Property__isReadOnly_tag >
{
	static const char * get()
	{
		return "isReadOnly";
	}
};


template < >
struct name< ::emof::Property__opposite_tag >
{
	static const char * get()
	{
		return "opposite";
	}
};


template < >
struct eclass< ::emof::Tag >
{
	typedef boost::mpl::list< ::emof::Element > eSuperTypes;
	typedef boost::mpl::list< ::emof::Object,
	                          ::emof::Element > eAllSuperTypes;
	typedef boost::mpl::list< ::emof::Tag__element_tag,
	                          ::emof::Tag__name_tag,
	                          ::emof::Tag__value_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::emof::Element__ownedComment_tag,
	                          ::emof::Element__tag_tag,
	                          ::emof::Tag__element_tag,
	                          ::emof::Tag__name_tag,
	                          ::emof::Tag__value_tag > eAllStructuralFeatures;
};

template < >
struct name< ::emof::Tag >
{
	static const char * get()
	{
		return "Tag";
	}
};


template < >
struct name< ::emof::Tag__element_tag >
{
	static const char * get()
	{
		return "element";
	}
};


template < >
struct name< ::emof::Tag__name_tag >
{
	static const char * get()
	{
		return "name";
	}
};


template < >
struct name< ::emof::Tag__value_tag >
{
	static const char * get()
	{
		return "value";
	}
};


template < >
struct eclass< ::emof::Type >
{
	typedef boost::mpl::list< ::emof::NamedElement > eSuperTypes;
	typedef boost::mpl::list< ::emof::Object,
	                          ::emof::Element,
	                          ::emof::NamedElement > eAllSuperTypes;
	typedef boost::mpl::list< ::emof::Type__package_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::emof::Element__ownedComment_tag,
	                          ::emof::Element__tag_tag,
	                          ::emof::NamedElement__name_tag,
	                          ::emof::Type__package_tag > eAllStructuralFeatures;
};

template < >
struct name< ::emof::Type >
{
	static const char * get()
	{
		return "Type";
	}
};


template < >
struct name< ::emof::Type__package_tag >
{
	static const char * get()
	{
		return "package";
	}
};


template < >
struct eclass< ::emof::TypedElement >
{
	typedef boost::mpl::list< ::emof::NamedElement > eSuperTypes;
	typedef boost::mpl::list< ::emof::Object,
	                          ::emof::Element,
	                          ::emof::NamedElement > eAllSuperTypes;
	typedef boost::mpl::list< ::emof::TypedElement__type_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::emof::Element__ownedComment_tag,
	                          ::emof::Element__tag_tag,
	                          ::emof::NamedElement__name_tag,
	                          ::emof::TypedElement__type_tag > eAllStructuralFeatures;
};

template < >
struct name< ::emof::TypedElement >
{
	static const char * get()
	{
		return "TypedElement";
	}
};


template < >
struct name< ::emof::TypedElement__type_tag >
{
	static const char * get()
	{
		return "type";
	}
};


template < >
struct eclass< ::emof::URIExtent >
{
	typedef boost::mpl::list< ::emof::Extent > eSuperTypes;
	typedef boost::mpl::list< ::emof::Object,
	                          ::emof::Extent > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::emof::URIExtent >
{
	static const char * get()
	{
		return "URIExtent";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_EMOF_Meta_HPP
