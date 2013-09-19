
#ifndef EMF_CPP_KDM_CORE_META_HPP
#define EMF_CPP_KDM_CORE_META_HPP

#include <e4c/definition.hpp>
#include <kdm/core/fwd.hpp>

#include <kdm/kdm/fwd.hpp>

namespace kdm
{
namespace core
{



struct Element__attribute_tag
{
	typedef Element eClass;
	typedef ::kdm::kdm::Attribute eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Element__attribute_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct Element__annotation_tag
{
	typedef Element eClass;
	typedef ::kdm::kdm::Annotation eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Element__annotation_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ModelElement__stereotype_tag
{
	typedef ModelElement eClass;
	typedef ::kdm::kdm::Stereotype eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef ModelElement__stereotype_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct ModelElement__taggedValue_tag
{
	typedef ModelElement eClass;
	typedef ::kdm::kdm::ExtendedValue eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef ModelElement__taggedValue_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct KDMEntity__name_tag
{
	typedef KDMEntity eClass;
	typedef ::kdm::core::String eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};

struct AggregatedRelationship__from_tag
{
	typedef AggregatedRelationship eClass;
	typedef ::kdm::core::KDMEntity eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef AggregatedRelationship__from_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct AggregatedRelationship__to_tag
{
	typedef AggregatedRelationship eClass;
	typedef ::kdm::core::KDMEntity eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef AggregatedRelationship__to_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = false;
	static const bool unique = true;
};

struct AggregatedRelationship__relation_tag
{
	typedef AggregatedRelationship eClass;
	typedef ::kdm::core::KDMRelationship eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef AggregatedRelationship__relation_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = true;
};

struct AggregatedRelationship__density_tag
{
	typedef AggregatedRelationship eClass;
	typedef ::kdm::core::Integer eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = false;
	static const bool unique = false;
};


} // core
} // kdm


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::kdm::core::CorePackage >
{
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement,
	                          ::kdm::core::KDMEntity,
	                          ::kdm::core::KDMRelationship,
	                          ::kdm::core::AggregatedRelationship > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::kdm::core::Element >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::core::Element >
{
	static const char * get()
	{
		return "Element";
	}
};


template < >
struct name< ::kdm::core::Element__attribute_tag >
{
	static const char * get()
	{
		return "attribute";
	}
};


template < >
struct name< ::kdm::core::Element__annotation_tag >
{
	static const char * get()
	{
		return "annotation";
	}
};


template < >
struct eclass< ::kdm::core::ModelElement >
{
	typedef boost::mpl::list< ::kdm::core::Element > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::core::ModelElement >
{
	static const char * get()
	{
		return "ModelElement";
	}
};


template < >
struct name< ::kdm::core::ModelElement__stereotype_tag >
{
	static const char * get()
	{
		return "stereotype";
	}
};


template < >
struct name< ::kdm::core::ModelElement__taggedValue_tag >
{
	static const char * get()
	{
		return "taggedValue";
	}
};


template < >
struct eclass< ::kdm::core::KDMEntity >
{
	typedef boost::mpl::list< ::kdm::core::ModelElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::core::KDMEntity__name_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::KDMEntity__name_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::core::KDMEntity >
{
	static const char * get()
	{
		return "KDMEntity";
	}
};


template < >
struct name< ::kdm::core::KDMEntity__name_tag >
{
	static const char * get()
	{
		return "name";
	}
};


template < >
struct eclass< ::kdm::core::KDMRelationship >
{
	typedef boost::mpl::list< ::kdm::core::ModelElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::core::KDMRelationship >
{
	static const char * get()
	{
		return "KDMRelationship";
	}
};


template < >
struct eclass< ::kdm::core::AggregatedRelationship >
{
	typedef boost::mpl::list< ::kdm::core::ModelElement > eSuperTypes;
	typedef boost::mpl::list< ::kdm::core::Element,
	                          ::kdm::core::ModelElement > eAllSuperTypes;
	typedef boost::mpl::list< ::kdm::core::AggregatedRelationship__from_tag,
	                          ::kdm::core::AggregatedRelationship__to_tag,
	                          ::kdm::core::AggregatedRelationship__relation_tag,
	                          ::kdm::core::AggregatedRelationship__density_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::kdm::core::Element__attribute_tag,
	                          ::kdm::core::Element__annotation_tag,
	                          ::kdm::core::ModelElement__stereotype_tag,
	                          ::kdm::core::ModelElement__taggedValue_tag,
	                          ::kdm::core::AggregatedRelationship__from_tag,
	                          ::kdm::core::AggregatedRelationship__to_tag,
	                          ::kdm::core::AggregatedRelationship__relation_tag,
	                          ::kdm::core::AggregatedRelationship__density_tag > eAllStructuralFeatures;
};

template < >
struct name< ::kdm::core::AggregatedRelationship >
{
	static const char * get()
	{
		return "AggregatedRelationship";
	}
};


template < >
struct name< ::kdm::core::AggregatedRelationship__from_tag >
{
	static const char * get()
	{
		return "from";
	}
};


template < >
struct name< ::kdm::core::AggregatedRelationship__to_tag >
{
	static const char * get()
	{
		return "to";
	}
};


template < >
struct name< ::kdm::core::AggregatedRelationship__relation_tag >
{
	static const char * get()
	{
		return "relation";
	}
};


template < >
struct name< ::kdm::core::AggregatedRelationship__density_tag >
{
	static const char * get()
	{
		return "density";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_KDM_CORE_Meta_HPP
