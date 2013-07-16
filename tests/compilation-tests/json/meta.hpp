
#ifndef EMF_CPP_JSON_META_HPP
#define EMF_CPP_JSON_META_HPP

#include <json/fwd.hpp>

#include <ecore/fwd.hpp>

namespace json
{



struct ObjectValue__members_tag
{
	typedef ObjectValue eClass;
	typedef ::json::NVPair eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef ObjectValue__members_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct NVPair__name_tag
{
	typedef NVPair eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct NVPair__value_tag
{
	typedef NVPair eClass;
	typedef ::json::Value eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef NVPair__value_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 1;
	static const bool ordered = true;
	static const bool unique = true;
};

struct StringValue__value_tag
{
	typedef StringValue eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct NumberValue__value_tag
{
	typedef NumberValue eClass;
	typedef ::ecore::EDouble eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct BooleanValue__value_tag
{
	typedef BooleanValue eClass;
	typedef ::ecore::EBoolean eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct ArrayValue__values_tag
{
	typedef ArrayValue eClass;
	typedef ::json::Value eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef ArrayValue__values_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};


} // json


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::json::JsonPackage >
{
	typedef boost::mpl::list< ::json::ObjectValue,
	                          ::json::NVPair,
	                          ::json::Value,
	                          ::json::StringValue,
	                          ::json::NumberValue,
	                          ::json::BooleanValue,
	                          ::json::ArrayValue,
	                          ::json::NullValue > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::json::ObjectValue >
{
	typedef boost::mpl::list< ::json::Value > eSuperTypes;
	typedef boost::mpl::list< ::json::Value > eAllSuperTypes;
	typedef boost::mpl::list< ::json::ObjectValue__members_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::json::ObjectValue__members_tag > eAllStructuralFeatures;
};

template < >
struct name< ::json::ObjectValue >
{
	static const char * get()
	{
		return "ObjectValue";
	}
};


template < >
struct name< ::json::ObjectValue__members_tag >
{
	static const char * get()
	{
		return "members";
	}
};


template < >
struct eclass< ::json::NVPair >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::json::NVPair__name_tag,
	                          ::json::NVPair__value_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::json::NVPair__name_tag,
	                          ::json::NVPair__value_tag > eAllStructuralFeatures;
};

template < >
struct name< ::json::NVPair >
{
	static const char * get()
	{
		return "NVPair";
	}
};


template < >
struct name< ::json::NVPair__name_tag >
{
	static const char * get()
	{
		return "name";
	}
};


template < >
struct name< ::json::NVPair__value_tag >
{
	static const char * get()
	{
		return "value";
	}
};


template < >
struct eclass< ::json::Value >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::json::Value >
{
	static const char * get()
	{
		return "Value";
	}
};


template < >
struct eclass< ::json::StringValue >
{
	typedef boost::mpl::list< ::json::Value > eSuperTypes;
	typedef boost::mpl::list< ::json::Value > eAllSuperTypes;
	typedef boost::mpl::list< ::json::StringValue__value_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::json::StringValue__value_tag > eAllStructuralFeatures;
};

template < >
struct name< ::json::StringValue >
{
	static const char * get()
	{
		return "StringValue";
	}
};


template < >
struct name< ::json::StringValue__value_tag >
{
	static const char * get()
	{
		return "value";
	}
};


template < >
struct eclass< ::json::NumberValue >
{
	typedef boost::mpl::list< ::json::Value > eSuperTypes;
	typedef boost::mpl::list< ::json::Value > eAllSuperTypes;
	typedef boost::mpl::list< ::json::NumberValue__value_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::json::NumberValue__value_tag > eAllStructuralFeatures;
};

template < >
struct name< ::json::NumberValue >
{
	static const char * get()
	{
		return "NumberValue";
	}
};


template < >
struct name< ::json::NumberValue__value_tag >
{
	static const char * get()
	{
		return "value";
	}
};


template < >
struct eclass< ::json::BooleanValue >
{
	typedef boost::mpl::list< ::json::Value > eSuperTypes;
	typedef boost::mpl::list< ::json::Value > eAllSuperTypes;
	typedef boost::mpl::list< ::json::BooleanValue__value_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::json::BooleanValue__value_tag > eAllStructuralFeatures;
};

template < >
struct name< ::json::BooleanValue >
{
	static const char * get()
	{
		return "BooleanValue";
	}
};


template < >
struct name< ::json::BooleanValue__value_tag >
{
	static const char * get()
	{
		return "value";
	}
};


template < >
struct eclass< ::json::ArrayValue >
{
	typedef boost::mpl::list< ::json::Value > eSuperTypes;
	typedef boost::mpl::list< ::json::Value > eAllSuperTypes;
	typedef boost::mpl::list< ::json::ArrayValue__values_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::json::ArrayValue__values_tag > eAllStructuralFeatures;
};

template < >
struct name< ::json::ArrayValue >
{
	static const char * get()
	{
		return "ArrayValue";
	}
};


template < >
struct name< ::json::ArrayValue__values_tag >
{
	static const char * get()
	{
		return "values";
	}
};


template < >
struct eclass< ::json::NullValue >
{
	typedef boost::mpl::list< ::json::Value > eSuperTypes;
	typedef boost::mpl::list< ::json::Value > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list<  > eAllStructuralFeatures;
};

template < >
struct name< ::json::NullValue >
{
	static const char * get()
	{
		return "NullValue";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_JSON_Meta_HPP
