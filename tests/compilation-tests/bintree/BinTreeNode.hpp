
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
	typedef bintree::BinTreeNode_ptr left_t;
	typedef bintree::BinTreeNode_ptr right_t;
	typedef ::ecore::EString data_t;

	
	parent_t getParent() const;
	left_t getLeft() const;
	right_t getRight() const;
	void setData(data_t _data);
	data_t getData() const;


	bintree::BinTreeNode_ptr m_parent;
	std::unique_ptr < bintree::BinTreeNode > m_left;
	std::unique_ptr < bintree::BinTreeNode > m_right;
	data_t m_data;

		
protected:

};

} // bintree


#endif // EMF_CPP_BINTREE_BINTREENODE__HPP
