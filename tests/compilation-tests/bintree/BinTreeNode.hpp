
#ifndef EMF_CPP_BINTREE_BINTREENODE__HPP
#define EMF_CPP_BINTREE_BINTREENODE__HPP

#include <bintree/fwd.hpp>
#include <bintree/meta.hpp>
#include <ecore/EObject.hpp>

namespace bintree
{


// bintree::BinTreeNode
class BinTreeNode : public virtual ::ecore::EObject
{
public:

	typedef BinTreeNode_ptr ptr_type;

	BinTreeNode();
	virtual ~BinTreeNode();

	// Typedefs
	typedef ::e4c::impl::reference< BinTreeNode__parent_tag > _parent_t;
	typedef ::e4c::impl::reference< BinTreeNode__left_tag > _left_t;
	typedef ::e4c::impl::reference< BinTreeNode__right_tag > _right_t;
	typedef ::e4c::impl::attribute< BinTreeNode__data_tag > _data_t;

	
	// Members
	_parent_t parent;
	_left_t left;
	_right_t right;
	_data_t data;

};

} // bintree


#endif // EMF_CPP_BINTREE_BINTREENODE__HPP
