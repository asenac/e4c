
#ifndef EMF_CPP_BINTREE_BINTREENODE__HPP
#define EMF_CPP_BINTREE_BINTREENODE__HPP

#include <bintree/fwd.hpp>
#include <bintree/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace bintree
{


// bintree::BinTreeNode
class BinTreeNode
{
public:

	typedef BinTreeNode_ptr ptr_type;
	
	BinTreeNode();
	virtual ~BinTreeNode();

	typedef bintree::BinTreeNode_ptr parent_t;
	typedef std::unique_ptr < bintree::BinTreeNode > left_t;
	typedef std::unique_ptr < bintree::BinTreeNode > right_t;
	typedef int data_t;

	
	// TODO
	// TODO
	// TODO
	void setData(data_t _data);
	data_t getData() const;

	
protected:

	parent_t m_parent;
	left_t m_left;
	right_t m_right;
	data_t m_data;

};

} // bintree


#endif // EMF_CPP_BINTREE_BINTREENODE__HPP
