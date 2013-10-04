#ifndef EMF_CPP_TREE_PACKAGE_HPP
#define EMF_CPP_TREE_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <tree/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace tree
{


class TreePackage : public ::ecore::EPackage
{
public:
    static const TreePackage_ptr _instance();

 	::ecore::EClass_ptr getTreeNode() const;
 	::ecore::EClass_ptr getLeaf() const;
 	::ecore::EClass_ptr getNonTerminal() const;
 	
 	::ecore::EAttribute_ptr getTreeNode__data() const;
 	::ecore::EReference_ptr getTreeNode__parent() const;
 	::ecore::EReference_ptr getNonTerminal__children() const;

 	e4c::tag_t getTag_TreeNode() const;
 	e4c::tag_t getTag_Leaf() const;
 	e4c::tag_t getTag_NonTerminal() const;
 
 	e4c::tag_t getTag_TreeNode__data() const;
 	e4c::tag_t getTag_TreeNode__parent() const;
 	e4c::tag_t getTag_NonTerminal__children() const;

protected:
    TreePackage();
    
 	::ecore::EClass_ptr m_TreeNode;
 	::ecore::EClass_ptr m_Leaf;
 	::ecore::EClass_ptr m_NonTerminal;
 	::ecore::EAttribute_ptr m_TreeNode__data;
 	::ecore::EReference_ptr m_TreeNode__parent;
 	::ecore::EReference_ptr m_NonTerminal__children;
};

} // tree


#endif // EMF_CPP_TREE_PACKAGE_HPP
