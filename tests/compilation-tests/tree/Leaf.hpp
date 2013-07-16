
#ifndef EMF_CPP_TREE_LEAF__HPP
#define EMF_CPP_TREE_LEAF__HPP

#include <tree/fwd.hpp>
#include <tree/meta.hpp>
#include <tree/TreeNode.hpp>

namespace tree
{


// tree::Leaf
class Leaf :  public virtual ::tree::TreeNode
{
public:

	typedef Leaf_ptr ptr_type;

	Leaf();
	virtual ~Leaf();

	// Typedefs
	
	
	// Members
	
};

} // tree


#endif // EMF_CPP_TREE_LEAF__HPP
