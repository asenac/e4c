#ifndef EMF_CPP_TREE_PACKAGE_HPP
#define EMF_CPP_TREE_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <tree/fwd.hpp>

namespace tree
{


class TreePackage : public ::ecore::EPackage
{
public:
    static const TreePackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_TreeNode() const;
 	e4c::tag_t getTag_Leaf() const;
 	e4c::tag_t getTag_NonTerminal() const;
 
 	// Structural features
 	e4c::tag_t getTag_TreeNode__data() const;
 	e4c::tag_t getTag_TreeNode__parent() const;
 	e4c::tag_t getTag_NonTerminal__children() const;

protected:
    TreePackage();
};

} // tree


#endif // EMF_CPP_TREE_PACKAGE_HPP
