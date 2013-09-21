
#ifndef EMF_CPP_TREE_TREENODE__HPP
#define EMF_CPP_TREE_TREENODE__HPP

#include <tree/fwd.hpp>
#include <tree/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace tree
{


// tree::TreeNode
class TreeNode
{
public:

	typedef TreeNode_ptr ptr_type;
	
	virtual ~TreeNode();

	typedef ::ecore::EString data_t;
	typedef tree::TreeNode_ptr parent_t;

	
	void setData(data_t _data);
	data_t getData() const;
	parent_t getParent() const;


	data_t m_data;
	tree::TreeNode_ptr m_parent;

		
protected:
	TreeNode();

};

} // tree


#endif // EMF_CPP_TREE_TREENODE__HPP
