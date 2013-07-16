#include "TreePackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace tree;

TreePackage::TreePackage()
{
}

TreePackage_ptr TreePackage::_instance()
{
	static TreePackage __instance;
	return &__instance;
}

e4c::tag_t TreePackage::getTag_TreeNode()
{
	return e4c::tag< TreeNode >::get();
}
 
e4c::tag_t TreePackage::getTag_Leaf()
{
	return e4c::tag< Leaf >::get();
}
 
e4c::tag_t TreePackage::getTag_NonTerminal()
{
	return e4c::tag< NonTerminal >::get();
}
 
e4c::tag_t TreePackage::getTag_TreeNode__data()
{
	return e4c::tag< TreeNode__data_tag >::get();
}

e4c::tag_t TreePackage::getTag_TreeNode__parent()
{
	return e4c::tag< TreeNode__parent_tag >::get();
}

e4c::tag_t TreePackage::getTag_NonTerminal__children()
{
	return e4c::tag< NonTerminal__children_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_tree()
{
	return ::tree::TreePackage::_instance();
}
