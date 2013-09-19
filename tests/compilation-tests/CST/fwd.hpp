#ifndef EMF_CPP_CST_FWD_HPP
#define EMF_CPP_CST_FWD_HPP


namespace CST
{


class CSTPackage;
typedef CSTPackage * CSTPackage_ptr;
class CSTFactory;
typedef CSTFactory * CSTFactory_ptr;

// Data types


// Classes
class Tree;
typedef Tree* Tree_ptr;
class Element;
typedef Element* Element_ptr;
class Node;
typedef Node* Node_ptr;
class Leaf;
typedef Leaf* Leaf_ptr;


// Structural features
struct Element__kind_tag;
struct Node__children_tag;
struct Leaf__value_tag;
struct Leaf__pos_tag;
struct Leaf__line_tag;


} // CST


#endif // EMF_CPP_CST_FWD_HPP
