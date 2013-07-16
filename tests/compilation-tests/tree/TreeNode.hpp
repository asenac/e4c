
#ifndef EMF_CPP_TREE_TREENODE__HPP
#define EMF_CPP_TREE_TREENODE__HPP

#include <tree/fwd.hpp>
#include <tree/meta.hpp>
#include <ecore/EObject.hpp>

namespace tree
{


// tree::TreeNode
class TreeNode : public virtual ::ecore::EObject
{
public:

	typedef TreeNode_ptr ptr_type;

	TreeNode();
	virtual ~TreeNode();

	// Typedefs
	typedef ::e4c::impl::attribute< TreeNode__data_tag > _data_t;
	typedef ::e4c::impl::reference< TreeNode__parent_tag > _parent_t;

	
	// Members
	_data_t data;
	_parent_t parent;

};

} // tree


#endif // EMF_CPP_TREE_TREENODE__HPP
