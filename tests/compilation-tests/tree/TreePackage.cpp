#include "TreePackage.hpp"
#include "TreeFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace tree;

TreePackage::TreePackage()
{
	m_eFactoryInstance = TreeFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
}

const TreePackage_ptr TreePackage::_instance()
{
	static TreePackage __instance;
	return &__instance;
}

e4c::tag_t TreePackage::getTag_TreeNode() const
{
	return e4c::tag< TreeNode >::get();
}
 
e4c::tag_t TreePackage::getTag_Leaf() const
{
	return e4c::tag< Leaf >::get();
}
 
e4c::tag_t TreePackage::getTag_NonTerminal() const
{
	return e4c::tag< NonTerminal >::get();
}
 
e4c::tag_t TreePackage::getTag_TreeNode__data() const
{
	return e4c::tag< TreeNode__data_tag >::get();
}

e4c::tag_t TreePackage::getTag_TreeNode__parent() const
{
	return e4c::tag< TreeNode__parent_tag >::get();
}

e4c::tag_t TreePackage::getTag_NonTerminal__children() const
{
	return e4c::tag< NonTerminal__children_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_tree()
{
	return ::tree::TreePackage::_instance();
}
