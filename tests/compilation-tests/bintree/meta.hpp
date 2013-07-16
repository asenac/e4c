
#ifndef EMF_CPP_BINTREE_META_HPP
#define EMF_CPP_BINTREE_META_HPP

#include <bintree/fwd.hpp>

#include <ecore/fwd.hpp>

namespace bintree
{



struct BinTreeNode__parent_tag
{
	typedef BinTreeNode eClass;
	typedef ::bintree::BinTreeNode eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef BinTreeNode__parent_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct BinTreeNode__left_tag
{
	typedef BinTreeNode eClass;
	typedef ::bintree::BinTreeNode eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef BinTreeNode__left_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct BinTreeNode__right_tag
{
	typedef BinTreeNode eClass;
	typedef ::bintree::BinTreeNode eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef BinTreeNode__right_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct BinTreeNode__data_tag
{
	typedef BinTreeNode eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};


} // bintree


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::bintree::BintreePackage >
{
	typedef boost::mpl::list< ::bintree::BinTreeNode > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::bintree::BinTreeNode >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::bintree::BinTreeNode__parent_tag,
	                          ::bintree::BinTreeNode__left_tag,
	                          ::bintree::BinTreeNode__right_tag,
	                          ::bintree::BinTreeNode__data_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::bintree::BinTreeNode__parent_tag,
	                          ::bintree::BinTreeNode__left_tag,
	                          ::bintree::BinTreeNode__right_tag,
	                          ::bintree::BinTreeNode__data_tag > eAllStructuralFeatures;
};

template < >
struct name< ::bintree::BinTreeNode >
{
	static const char * get()
	{
		return "BinTreeNode";
	}
};


template < >
struct name< ::bintree::BinTreeNode__parent_tag >
{
	static const char * get()
	{
		return "parent";
	}
};


template < >
struct name< ::bintree::BinTreeNode__left_tag >
{
	static const char * get()
	{
		return "left";
	}
};


template < >
struct name< ::bintree::BinTreeNode__right_tag >
{
	static const char * get()
	{
		return "right";
	}
};


template < >
struct name< ::bintree::BinTreeNode__data_tag >
{
	static const char * get()
	{
		return "data";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_BINTREE_Meta_HPP
