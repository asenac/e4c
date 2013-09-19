
#ifndef EMF_CPP_TREE_META_HPP
#define EMF_CPP_TREE_META_HPP

#include <e4c/definition.hpp>
#include <tree/fwd.hpp>

#include <ecore/fwd.hpp>

namespace tree
{



struct TreeNode__data_tag
{
	typedef TreeNode eClass;
	typedef ::ecore::EString eType;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct TreeNode__parent_tag
{
	typedef TreeNode eClass;
	typedef ::tree::TreeNode eReferenceType;
	static const bool containment = false;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef TreeNode__parent_tag eOpposite;
	static const int upperBound = 1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};

struct NonTerminal__children_tag
{
	typedef NonTerminal eClass;
	typedef ::tree::TreeNode eReferenceType;
	static const bool containment = true;
	static const bool container = false;
	static const bool hasOpposite = false; 
	typedef NonTerminal__children_tag eOpposite;
	static const int upperBound = -1;
	static const int lowerBound = 0;
	static const bool ordered = true;
	static const bool unique = true;
};


} // tree


namespace e4c
{
namespace definition
{

template < >
struct epackage< ::tree::TreePackage >
{
	typedef boost::mpl::list< ::tree::TreeNode,
	                          ::tree::Leaf,
	                          ::tree::NonTerminal > eClasses;
	typedef boost::mpl::list<  > eSubpackages;
};

template < >
struct eclass< ::tree::TreeNode >
{
	typedef boost::mpl::list<  > eSuperTypes;
	typedef boost::mpl::list<  > eAllSuperTypes;
	typedef boost::mpl::list< ::tree::TreeNode__data_tag,
	                          ::tree::TreeNode__parent_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::tree::TreeNode__data_tag,
	                          ::tree::TreeNode__parent_tag > eAllStructuralFeatures;
};

template < >
struct name< ::tree::TreeNode >
{
	static const char * get()
	{
		return "TreeNode";
	}
};


template < >
struct name< ::tree::TreeNode__data_tag >
{
	static const char * get()
	{
		return "data";
	}
};


template < >
struct name< ::tree::TreeNode__parent_tag >
{
	static const char * get()
	{
		return "parent";
	}
};


template < >
struct eclass< ::tree::Leaf >
{
	typedef boost::mpl::list< ::tree::TreeNode > eSuperTypes;
	typedef boost::mpl::list< ::tree::TreeNode > eAllSuperTypes;
	typedef boost::mpl::list<  > eStructuralFeatures;
	typedef boost::mpl::list< ::tree::TreeNode__data_tag,
	                          ::tree::TreeNode__parent_tag > eAllStructuralFeatures;
};

template < >
struct name< ::tree::Leaf >
{
	static const char * get()
	{
		return "Leaf";
	}
};


template < >
struct eclass< ::tree::NonTerminal >
{
	typedef boost::mpl::list< ::tree::TreeNode > eSuperTypes;
	typedef boost::mpl::list< ::tree::TreeNode > eAllSuperTypes;
	typedef boost::mpl::list< ::tree::NonTerminal__children_tag > eStructuralFeatures;
	typedef boost::mpl::list< ::tree::TreeNode__data_tag,
	                          ::tree::TreeNode__parent_tag,
	                          ::tree::NonTerminal__children_tag > eAllStructuralFeatures;
};

template < >
struct name< ::tree::NonTerminal >
{
	static const char * get()
	{
		return "NonTerminal";
	}
};


template < >
struct name< ::tree::NonTerminal__children_tag >
{
	static const char * get()
	{
		return "children";
	}
};



} // namespace definition
} // namespace e4c

#endif // EMF_CPP_TREE_Meta_HPP
