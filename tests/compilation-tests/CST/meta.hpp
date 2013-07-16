
#ifndef EMF_CPP_CST_META_HPP
#define EMF_CPP_CST_META_HPP

#include <CST/fwd.hpp>

#include <ecore/fwd.hpp>

namespace CST
{



struct Element__kind_tag
{
	typedef Element eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Node__children_tag
{
	typedef Node eClass;
	typedef ::CST::Element eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef Node__children_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Leaf__value_tag
{
	typedef Leaf eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Leaf__pos_tag
{
	typedef Leaf eClass;
	typedef ::ecore::EInt eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct Leaf__line_tag
{
	typedef Leaf eClass;
	typedef ::ecore::EInt eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};


} // CST


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::CST::CSTPackage >
{
	typedef boost::mpl::list< ::CST::Tree,
	                          ::CST::Element,
	                          ::CST::Node,
	                          ::CST::Leaf > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::CST::Tree >
{
	typedef boost::mpl::list< ::CST::Node > eSuperTypes;
	typedef boost::mpl::list< ::CST::Element,
	                          ::CST::Node > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::CST::Element__kind_tag,
	                          ::CST::Node__children_tag > eAllStructuralFeatures;
};

template < >
struct name< ::CST::Tree >
{
	static const char * get()
	{
		return "Tree";
	}
};


template < >
struct eclass< ::CST::Element >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::CST::Element__kind_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::CST::Element__kind_tag > eAllStructuralFeatures;
};

template < >
struct name< ::CST::Element >
{
	static const char * get()
	{
		return "Element";
	}
};


template < >
struct name< ::CST::Element__kind_tag >
{
	static const char * get()
	{
		return "kind";
	}
};


template < >
struct eclass< ::CST::Node >
{
	typedef boost::mpl::list< ::CST::Element > eSuperTypes;
	typedef boost::mpl::list< ::CST::Element > eAllSuperTypes;
	typedef boost::mpl::list< ::CST::Node__children_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::CST::Element__kind_tag,
	                          ::CST::Node__children_tag > eAllStructuralFeatures;
};

template < >
struct name< ::CST::Node >
{
	static const char * get()
	{
		return "Node";
	}
};


template < >
struct name< ::CST::Node__children_tag >
{
	static const char * get()
	{
		return "children";
	}
};


template < >
struct eclass< ::CST::Leaf >
{
	typedef boost::mpl::list< ::CST::Element > eSuperTypes;
	typedef boost::mpl::list< ::CST::Element > eAllSuperTypes;
	typedef boost::mpl::list< ::CST::Leaf__value_tag,
	                          ::CST::Leaf__pos_tag,
	                          ::CST::Leaf__line_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::CST::Element__kind_tag,
	                          ::CST::Leaf__value_tag,
	                          ::CST::Leaf__pos_tag,
	                          ::CST::Leaf__line_tag > eAllStructuralFeatures;
};

template < >
struct name< ::CST::Leaf >
{
	static const char * get()
	{
		return "Leaf";
	}
};


template < >
struct name< ::CST::Leaf__value_tag >
{
	static const char * get()
	{
		return "value";
	}
};


template < >
struct name< ::CST::Leaf__pos_tag >
{
	static const char * get()
	{
		return "pos";
	}
};


template < >
struct name< ::CST::Leaf__line_tag >
{
	static const char * get()
	{
		return "line";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_CST_Meta_HPP
