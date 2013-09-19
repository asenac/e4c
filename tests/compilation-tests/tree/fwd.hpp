#ifndef EMF_CPP_TREE_FWD_HPP
#define EMF_CPP_TREE_FWD_HPP


namespace tree
{


class TreePackage;
typedef TreePackage * TreePackage_ptr;
class TreeFactory;
typedef TreeFactory * TreeFactory_ptr;

// Data types


// Classes
class TreeNode;
typedef TreeNode* TreeNode_ptr;
class Leaf;
typedef Leaf* Leaf_ptr;
class NonTerminal;
typedef NonTerminal* NonTerminal_ptr;


// Structural features
struct TreeNode__data_tag;
struct TreeNode__parent_tag;
struct NonTerminal__children_tag;


} // tree


#endif // EMF_CPP_TREE_FWD_HPP
