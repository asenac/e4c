#include "TreePackage.hpp"
#include "TreeFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace tree;

TreePackage::TreePackage()
{
	m_eFactoryInstance = TreeFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	::ecore::EClass_ptr TreeNode_ = ecoreFactory->createEClass();
	TreeNode_->setName("TreeNode");
	// m_eClassifiers.push_back(TreeNode_);
	::ecore::EClass_ptr Leaf_ = ecoreFactory->createEClass();
	Leaf_->setName("Leaf");
	// m_eClassifiers.push_back(Leaf_);
	::ecore::EClass_ptr NonTerminal_ = ecoreFactory->createEClass();
	NonTerminal_->setName("NonTerminal");
	// m_eClassifiers.push_back(NonTerminal_);
	
	
	// Leaf_->addESuperType(TreeNode_);
	// NonTerminal_->addESuperType(TreeNode_);
	
	
	
	
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
