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
	
	
	
	m_TreeNode = ecoreFactory->createEClass();
	m_TreeNode->setName("TreeNode");
	addEClassifiers(m_TreeNode);
	m_Leaf = ecoreFactory->createEClass();
	m_Leaf->setName("Leaf");
	addEClassifiers(m_Leaf);
	m_NonTerminal = ecoreFactory->createEClass();
	m_NonTerminal->setName("NonTerminal");
	addEClassifiers(m_NonTerminal);

	
    {
        m_TreeNode__data = ecoreFactory->createEAttribute();
        m_TreeNode__data->setName("data");
        m_TreeNode->addEStructuralFeatures(m_TreeNode__data);
        m_TreeNode->addEAllStructuralFeatures(m_TreeNode__data);
        m_TreeNode->addEAttributes(m_TreeNode__data);
        m_TreeNode->addEAllAttributes(m_TreeNode__data);
    }
    {
        m_TreeNode__parent = ecoreFactory->createEReference();
        m_TreeNode__parent->setName("parent");
        m_TreeNode->addEStructuralFeatures(m_TreeNode__parent);
        m_TreeNode->addEAllStructuralFeatures(m_TreeNode__parent);
        m_TreeNode->addEReferences(m_TreeNode__parent);
        m_TreeNode->addEAllReferences(m_TreeNode__parent);
    }
    {
        m_NonTerminal__children = ecoreFactory->createEReference();
        m_NonTerminal__children->setName("children");
        m_NonTerminal->addEStructuralFeatures(m_NonTerminal__children);
        m_NonTerminal->addEAllStructuralFeatures(m_NonTerminal__children);
        m_NonTerminal->addEReferences(m_NonTerminal__children);
        m_NonTerminal->addEAllReferences(m_NonTerminal__children);
    }
	
	m_Leaf->addESuperTypes(m_TreeNode);
	m_Leaf->addAllEAllOperations(m_TreeNode->getEOperations());
	m_Leaf->addAllEAllReferences(m_TreeNode->getEReferences());
	m_Leaf->addAllEAllAttributes(m_TreeNode->getEAttributes());
	m_Leaf->addAllEAllStructuralFeatures(m_TreeNode->getEStructuralFeatures());
	m_NonTerminal->addESuperTypes(m_TreeNode);
	m_NonTerminal->addAllEAllOperations(m_TreeNode->getEOperations());
	m_NonTerminal->addAllEAllReferences(m_TreeNode->getEReferences());
	m_NonTerminal->addAllEAllAttributes(m_TreeNode->getEAttributes());
	m_NonTerminal->addAllEAllStructuralFeatures(m_TreeNode->getEStructuralFeatures());
	
	
	m_TreeNode->addFeatureAccesors(m_TreeNode__data, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< tree::TreeNode_ptr >(o)->getData()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_TreeNode->addFeatureAccesors(m_TreeNode__parent, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< tree::TreeNode_ptr >(o)->getParent()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	m_NonTerminal->addFeatureAccesors(m_NonTerminal__children, 
		[](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< tree::NonTerminal_ptr >(o)->getChildren()); },
		[](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
	
}

const TreePackage_ptr TreePackage::_instance()
{
	static TreePackage __instance;
	return &__instance;
}

ecore::EClass_ptr TreePackage::getTreeNode() const
{
	return m_TreeNode;
}
  	
e4c::tag_t TreePackage::getTag_TreeNode() const
{
	return e4c::tag< TreeNode >::get();
}
 
ecore::EClass_ptr TreePackage::getLeaf() const
{
	return m_Leaf;
}
  	
e4c::tag_t TreePackage::getTag_Leaf() const
{
	return e4c::tag< Leaf >::get();
}
 
ecore::EClass_ptr TreePackage::getNonTerminal() const
{
	return m_NonTerminal;
}
  	
e4c::tag_t TreePackage::getTag_NonTerminal() const
{
	return e4c::tag< NonTerminal >::get();
}
 
e4c::tag_t TreePackage::getTag_TreeNode__data() const
{
	return e4c::tag< TreeNode__data_tag >::get();
}

ecore::EAttribute_ptr TreePackage::getTreeNode__data() const
{
	return m_TreeNode__data;
}

e4c::tag_t TreePackage::getTag_TreeNode__parent() const
{
	return e4c::tag< TreeNode__parent_tag >::get();
}

ecore::EReference_ptr TreePackage::getTreeNode__parent() const
{
	return m_TreeNode__parent;
}

e4c::tag_t TreePackage::getTag_NonTerminal__children() const
{
	return e4c::tag< NonTerminal__children_tag >::get();
}

ecore::EReference_ptr TreePackage::getNonTerminal__children() const
{
	return m_NonTerminal__children;
}


extern "C" ::ecore::EPackage_ptr e4c_tree()
{
	return ::tree::TreePackage::_instance();
}
