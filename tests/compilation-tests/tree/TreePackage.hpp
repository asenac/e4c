#ifndef EMF_CPP_TREE_PACKAGE_HPP
#define EMF_CPP_TREE_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <tree/fwd.hpp>

namespace tree
{


class TreePackage : public ::ecore::EPackage
{
public:
    static TreePackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_TreeNode();
 	e4c::tag_t getTag_Leaf();
 	e4c::tag_t getTag_NonTerminal();
 
 	// Structural features
 	e4c::tag_t getTag_TreeNode__data();
 	e4c::tag_t getTag_TreeNode__parent();
 	e4c::tag_t getTag_NonTerminal__children();

protected:
    TreePackage();
};

} // tree


#endif // EMF_CPP_TREE_PACKAGE_HPP
